//  -------------------------------------------------------------------------
//
//   ----- General Macro for R3B CALIFA Analysis results
//         Author: Hector Alvarez <hector.alvarez@usc.es>
//         Last Update: 08/09/15 <pablo.cabanelas@usc.es>
//                      30/09/16 <joseluis.rodriguez.sanchez@usc.es>
//         Comments:
//                      Macro for the analysis of p2p reactions by using the demonstrator
//			Checks the primary, crystalHits and caloHits characteristics.
//			User configurable for additional studies.
//	
//  -------------------------------------------------------------------------
//
//   Usage: 
//      > root -l checkResults.C
//                         
//     BUT FIRST, select in the //SETTINGS section the simulation features 
//	(the macro will plot and text information as a function of these settings)
//  -------------------------------------------------------------------------





void AnalysisResults_Brho() {

	char title1[250];
	
	//SETTINGS 

	sprintf(title1,"%s","sim.root");	
	TFile *file1 = TFile::Open(title1);
	

	//END OF THE SETTING AREA
	
	
	// ----    Debug option   -------------------------------------------------
	gDebug = 0;
	// ------------------------------------------------------------------------
		
	
	//gROOT->SetStyle("Default");
	gStyle->SetOptStat(1);
	gStyle->SetOptFit(0);
	//gStyle->SetFillColor(0);

	gStyle->SetLabelSize(.043,"XY");

	gStyle->SetTitleSize(.042,"XY");


	
	
      


	TTree* TFission = (TTree*)file1->Get("evt");


	//MWPC1 Point (output)
	TClonesArray* MWPC1PointCA;  
	R3BSofMWPCPoint** MWPC1Point;//cambiado
	MWPC1PointCA = new TClonesArray("R3BSofMWPCPoint",2);//cambiado
	TBranch *branchMWPC1Point = TFission->GetBranch("SofMwpc1Point");//cambiado
	branchMWPC1Point->SetAddress(&MWPC1PointCA);

	//MWPC3 Point (output)
	TClonesArray* MWPC3PointCA;  
	R3BSofMWPCPoint** MWPC3Point;//cambiado
	MWPC3PointCA = new TClonesArray("R3BSofMWPCPoint",2);//cambiado
	TBranch *branchMWPC3Point = TFission->GetBranch("SofMwpc3Point");//cambiado
	branchMWPC3Point->SetAddress(&MWPC3PointCA);

	//ToFWall Point (output)
	TClonesArray* ToFWallPointCA;  
	R3BSofToFWPoint** ToFWallPoint;//cambiado
	ToFWallPointCA = new TClonesArray("R3BSofToFWPoint",2);//cambiado
	TBranch *branchTofWallPoint = TFission->GetBranch("SofTofWallPoint");//cambiado
	branchTofWallPoint->SetAddress(&ToFWallPointCA);

	//MCTrack(input)
	TClonesArray* MCTrackCA;  
	R3BMCTrack** track;
	MCTrackCA = new TClonesArray("R3BMCTrack",2);
	TBranch *branchMCTrack = TFission->GetBranch("MCTrack");
	branchMCTrack->SetAddress(&MCTrackCA);

	
	Long64_t nevents = TFission->GetEntries();
	

	
	Int_t MWPC1HitsPerEvent=0;
	Int_t MWPC3HitsPerEvent=0;
	Int_t MCtracksPerEvent=0;
	Int_t TofWallHitsPerEvent=0;
	
	

	Double_t pi = 3.141592653589793238;

	double cont;
	double cont1;

	//VARIABLES

	Double_t z_ALADIN= 255;		//[cm]
	Double_t z_MWPC1= 45.6;		//[cm]
	Double_t z_MWPC2= 616.85;	//[cm]
	Double_t z_ToF_Wall= 685.3;	//[cm]
	Double_t angle_theta=0;		//[rad] Ángulo del fragmento medido en la Twin. MEDIDO.
	Double_t angle_alpha=0.126;	//[rad]
	Double_t angle_beta=0.230;	//[rad]
	Double_t Pos_Xc;		//[cm] Posición X  del fragmento en el centro del imán. ¡CALCULADO!
	Double_t Pos_Zc;		//[cm] Posición Z del fragmento en el centro del imán. ¡CALCULADO!
	Double_t Position_MWPC1_X;	//[cm] Posición X medida en la MWPC1. ¡MEDIDO!
	Double_t Position_MWPC3_X;	//[cm] Posición X  medida en la MWPC3. ¡MEDIDO!
	Double_t Position_MWPC3_Y;	//[cm] Posición Y  medida en la MWPC3. ¡MEDIDO!
	Double_t L_ALADIN=180.0;	//[cm] Longitud efectiva de ALADIN.
	Double_t B_ALADIN=1.6;		//[T]  Campo magnético de ALADIN. Lo consideraremos constante ya que los fragmentos pasarán cercanos al centro.
	Double_t Pos_Xb;		//[cm] Posición X del fragmento a la entrada del imán. CALCULADO.
	Double_t Pos_Zb;		//[cm] Posición Z del fragmento a la entrada del imán. CALCULADO
	Double_t Pos_Xe;		//[cm] Posición X en el sistema laboratorio en la MWPC2. CALCULADO.
	Double_t Pos_Ye;		//[cm] Posición Y en el sistema laboratorio en la MWPC2. CALCULADO.
	Double_t Pos_Ze;		//[cm] Posición z en el sistema laboratorio en la MWPC2. CALCULADO.
	Double_t angle_eta;		//[mrad]Desviación angular del fragmento respecto al centro del dipolo.
	Double_t Pos_Xf;		//[cm] Posición X en la ToF Wall.
	Double_t Pos_Zf;		//[cm] Posición Z en la ToF Wall.
	Double_t Pos_Xd;		//[cm] Posición X a la salida del imán.
	Double_t Pos_Zd;		//[cm] Posición Z a la salida del imán.
	Double_t rho;			//[cm] Radio de curvatura de la trayectoria seguida por el fragmento.
	Double_t Magnetic_Rigidity;

	Double_t angle_omega;
	Double_t L_trajectory_xz;
	Double_t Velocity;
	Double_t ToF_FF;
	Double_t beta;
	Double_t gamma;
	Double_t AoQ;
	Double_t FF_Mass;

	//HISTOGRAMS

	TH1D* h_Magnetic_Rigidity = new TH1D("h_Magnetic_Rigidity","h_Magnetic_Rigidity",750,6,12);
	TH1D* h_AoQ = new TH1D("h_AoQ","h_AoQ",1000,1.5,3.2);
	TH1D* h_Mass = new TH1D("h_Mass","h_Mass",1500,80,120);
	TH1D* h_L_trajectory_xz = new TH1D("h_L_trajectory_xz","h_L_trajectory_xz",1250,800,860);
	TH1D* h_Velocity = new TH1D("h_Velocity","h_Velocity",1000,22,24);
	TH1D* h_ToF = new TH1D("h_ToF","h_ToF",1000,34,36);


	//////////////////////////////////////////////////////////////////


        double pos1[18];
        double pos2[18];
        for(int s=0;s<18;s++){ pos1[s]=-500.; pos2[s]=-500.; }

	for(Int_t i=0;i<nevents;i++){

	    if(i%10000 == 0) printf("Event:%i\n",i);
				
		MWPC1PointCA->Clear();
		MWPC3PointCA->Clear();
                ToFWallPointCA->Clear();
		MCTrackCA->Clear();

		TFission->GetEvent(i);
									
		MWPC1HitsPerEvent = MWPC1PointCA->GetEntries();	
		MWPC3HitsPerEvent = MWPC3PointCA->GetEntries(); 		
                TofWallHitsPerEvent = ToFWallPointCA->GetEntries(); 	
		MCtracksPerEvent = MCTrackCA->GetEntries();		
									

		

                //cout << "Tracker Si points: " << trackerPointsPerEvent << endl;
		
		if(MWPC1HitsPerEvent>0) {
			MWPC1Point = new R3BSofMWPCPoint*[MWPC1HitsPerEvent];
			for(Int_t j=0;j<MWPC1HitsPerEvent;j++){
				MWPC1Point[j] = new R3BSofMWPCPoint;
				MWPC1Point[j] = (R3BSofMWPCPoint*) MWPC1PointCA->At(j);      
			}
		}
	
		if(MWPC3HitsPerEvent>0) {
			MWPC3Point = new R3BSofMWPCPoint*[MWPC3HitsPerEvent];
			for(Int_t j=0;j<MWPC3HitsPerEvent;j++){
				MWPC3Point[j] = new R3BSofMWPCPoint;
				MWPC3Point[j] = (R3BSofMWPCPoint*) MWPC3PointCA->At(j);      
			}
		}
		
		if(TofWallHitsPerEvent>0) {
			ToFWallPoint = new R3BSofToFWPoint*[TofWallHitsPerEvent];
			for(Int_t j=0;j<TofWallHitsPerEvent;j++){
				ToFWallPoint[j] = new R3BSofToFWPoint;
				ToFWallPoint[j] = (R3BSofToFWPoint*) ToFWallPointCA->At(j);      
			}
		}


		if(MCtracksPerEvent>0) {
			track = new R3BMCTrack*[MCtracksPerEvent];
			for(Int_t j=0;j<MCtracksPerEvent;j++){
				track[j] = new R3BMCTrack;
				track[j] = (R3BMCTrack*) MCTrackCA->At(j);      
			}
		}

		Int_t primary=0;

		//loop in event hits

		//for(Int_t k=0;k<MCtracksPerEvent;k++){


		//	double MotherId = track[k]->GetMotherId();

		//	if(MotherId==-1){

			for(Int_t h=0;h<MWPC3HitsPerEvent;h++){
	
				double charge=MWPC3Point[h]->GetChargeIn();
				double mass=MWPC3Point[h]->GetAIn();
				
				
				if (charge==40 && mass>89 && mass<94){

				//cout << mass << endl;

				Position_MWPC1_X=0.;
				Position_MWPC3_X=(-1)*(MWPC3Point[h]->GetXIn()+140.65);  //cout << Position_MWPC3_X << endl;
				Position_MWPC3_Y=(MWPC3Point[h]->GetYIn());
				double Position_MWPC3_Z=(MWPC3Point[h]->GetZIn());

				for(Int_t j=0;j<TofWallHitsPerEvent;j++){


				double charge_tof= ToFWallPoint[j]->GetZFF();
				double mass_tof = ToFWallPoint[j]->GetAFF();

				if (charge==charge_tof && mass==mass_tof){

				ToF_FF=ToFWallPoint[j]->GetTime();


				//Positions upstream ALADIN

					Pos_Xc = (1/(1+tan(angle_alpha)*tan(angle_theta)))*(Position_MWPC1_X + (z_ALADIN - z_MWPC1)*tan(angle_theta));
					Pos_Zc = z_ALADIN - Pos_Xc*tan(angle_alpha);
	
			
				//Positions at the entrance of ALADIN


					Pos_Xb = Pos_Xc - (L_ALADIN/2)*(sin(angle_theta)/cos(angle_theta - angle_alpha));
					Pos_Zb = Pos_Zc - (L_ALADIN/2)*(cos(angle_theta)/cos(angle_theta - angle_alpha)); 


				//Positions downstream ALADIN

					Pos_Xe = Position_MWPC3_X;//(z_MWPC2 - z_ALADIN)*sin(angle_beta) + Position_MWPC3_X*cos(angle_beta);
					Pos_Ye = Position_MWPC3_Y;
					Pos_Ze = Position_MWPC3_Z;//z_ALADIN + (z_MWPC2 - z_ALADIN)*cos(angle_beta) - Position_MWPC3_X*sin(angle_beta);
		
					angle_eta = TMath::ATan((Pos_Xe-Pos_Xc)/(Pos_Ze-Pos_Zc));


				//ToF Wall Positions

					Pos_Xf = Pos_Xe + (((z_ToF_Wall - z_MWPC2)*sin(angle_eta))/(cos(angle_eta - angle_beta)));
					Pos_Zf = Pos_Ze + (((z_ToF_Wall - z_MWPC2)*cos(angle_eta))/(cos(angle_eta - angle_beta)));


				//Positions at the exit of the magnet

					Pos_Xd = Pos_Xc + (L_ALADIN/2)*(sin(angle_eta)/cos(angle_eta - angle_alpha));
					Pos_Zd = Pos_Zc + (L_ALADIN/2)*(cos(angle_eta)/cos(angle_eta - angle_alpha));


				//Curvature Radius

					rho = L_ALADIN/(2*sin((angle_eta-angle_theta)/2)*cos(angle_alpha -((angle_eta-angle_theta)/2))); cout << rho*1E-2 << endl;


				//Trajectory

					angle_omega = TMath::Abs( 2*( TMath::ASin( sqrt( (((Pos_Zd-Pos_Zb)*(Pos_Zd-Pos_Zb))-((Pos_Xd-Pos_Xb)*(Pos_Xd-Pos_Xb)))/(4*rho*rho) ) ) ) );

					L_trajectory_xz = ((Pos_Zb+132.15)/cos(angle_theta) + (rho*angle_omega) + (Pos_Zf - Pos_Zd)/cos(angle_eta));  //cout << L_trajectory_xz << endl;

					//Pos_Yf=Pos_YE*(Pos_Zf+132.15/Pos_Ze+132.15));
					//L_trajectory_total_RD = sqrt( (L_trajectory_xz_RD)**2 + (Pos_Yf_RD)**2 )

					//L_trajectory_xz = ToFWallPoint[j]->GetLength();

					h_L_trajectory_xz->Fill(L_trajectory_xz);
					
					Velocity= (L_trajectory_xz)/(ToF_FF);

					h_Velocity->Fill(Velocity);

					h_ToF->Fill(ToF_FF);

					

				//AoQ


				

				beta = Velocity/29.98;
				gamma = 1/(sqrt(1-(beta*beta)));

				Magnetic_Rigidity = (mass/charge)*3.107*beta*gamma;//B_ALADIN*rho*1E-2;

				h_Magnetic_Rigidity->Fill(Magnetic_Rigidity);

				AoQ= Magnetic_Rigidity/(3.107*beta*gamma);
				h_AoQ->Fill(AoQ);
				FF_Mass=AoQ*40; //cout << FF_Mass << endl;
				h_Mass->Fill(FF_Mass);

				}

				}


				}//Charge/Mass if end

				//}//MotherId if

			}// MWPC3Hits for end

		//}// MCtracksPerEvent for end


	

   	 	}        

                for(int s=0;s<18;s++){ pos1[s]=-500.; pos2[s]=-500.; }
		if(MWPC1HitsPerEvent)   delete[] MWPC1Point;
		if(MWPC3HitsPerEvent)      delete[] MWPC3Point;
                if(TofWallHitsPerEvent) delete[] ToFWallPoint;
		if(MCtracksPerEvent)      delete[] track;

	

	//CANVAS		
	
TCanvas *can = new TCanvas(" Magnetic Rigidity up "," Magnetic Rigidity up ");

h_Magnetic_Rigidity->Draw(); h_Magnetic_Rigidity->SetTitle("Fission Fragment Right up Magnetic Rigidity "); h_Magnetic_Rigidity->GetXaxis()->SetTitle(" Magnetic Rigidity FF Right UP [T.m]");h_Magnetic_Rigidity->GetYaxis()->SetTitle(" Events");

TCanvas *can1 = new TCanvas(" AoQ "," AoQ ");

h_AoQ->Draw();


TCanvas *can2 = new TCanvas(" Mass "," Mass ");

h_Mass->Draw();

TCanvas *can3 = new TCanvas(" Trajectory up "," Trajectory up ");

h_L_trajectory_xz->Draw();

TCanvas *can4 = new TCanvas(" Velocity up "," Velocity up ");

h_Velocity->Draw();

TCanvas *can5 = new TCanvas(" ToF down "," ToF down ");

h_ToF->Draw();
		
}
