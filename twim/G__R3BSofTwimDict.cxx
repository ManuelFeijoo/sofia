// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dImntdIscratch1dIr3brootdIbuild_new2dIsofiadItwimdIG__R3BSofTwimDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "R3BSofTWIM.h"
#include "R3BSofTwimContFact.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BSofTWIM(void *p = 0);
   static void *newArray_R3BSofTWIM(Long_t size, void *p);
   static void delete_R3BSofTWIM(void *p);
   static void deleteArray_R3BSofTWIM(void *p);
   static void destruct_R3BSofTWIM(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSofTWIM*)
   {
      ::R3BSofTWIM *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSofTWIM >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSofTWIM", ::R3BSofTWIM::Class_Version(), "", 18,
                  typeid(::R3BSofTWIM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSofTWIM::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSofTWIM) );
      instance.SetNew(&new_R3BSofTWIM);
      instance.SetNewArray(&newArray_R3BSofTWIM);
      instance.SetDelete(&delete_R3BSofTWIM);
      instance.SetDeleteArray(&deleteArray_R3BSofTWIM);
      instance.SetDestructor(&destruct_R3BSofTWIM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSofTWIM*)
   {
      return GenerateInitInstanceLocal((::R3BSofTWIM*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSofTWIM*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSofTwimContFact(void *p = 0);
   static void *newArray_R3BSofTwimContFact(Long_t size, void *p);
   static void delete_R3BSofTwimContFact(void *p);
   static void deleteArray_R3BSofTwimContFact(void *p);
   static void destruct_R3BSofTwimContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSofTwimContFact*)
   {
      ::R3BSofTwimContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSofTwimContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSofTwimContFact", ::R3BSofTwimContFact::Class_Version(), "", 179,
                  typeid(::R3BSofTwimContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSofTwimContFact::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSofTwimContFact) );
      instance.SetNew(&new_R3BSofTwimContFact);
      instance.SetNewArray(&newArray_R3BSofTwimContFact);
      instance.SetDelete(&delete_R3BSofTwimContFact);
      instance.SetDeleteArray(&deleteArray_R3BSofTwimContFact);
      instance.SetDestructor(&destruct_R3BSofTwimContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSofTwimContFact*)
   {
      return GenerateInitInstanceLocal((::R3BSofTwimContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSofTwimContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BSofTWIM::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSofTWIM::Class_Name()
{
   return "R3BSofTWIM";
}

//______________________________________________________________________________
const char *R3BSofTWIM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSofTWIM*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSofTWIM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSofTWIM*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSofTWIM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSofTWIM*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSofTWIM::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSofTWIM*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSofTwimContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSofTwimContFact::Class_Name()
{
   return "R3BSofTwimContFact";
}

//______________________________________________________________________________
const char *R3BSofTwimContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSofTwimContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSofTwimContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSofTwimContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSofTwimContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSofTwimContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSofTwimContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSofTwimContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BSofTWIM::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSofTWIM.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSofTWIM::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSofTWIM::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSofTWIM(void *p) {
      return  p ? new(p) ::R3BSofTWIM : new ::R3BSofTWIM;
   }
   static void *newArray_R3BSofTWIM(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSofTWIM[nElements] : new ::R3BSofTWIM[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSofTWIM(void *p) {
      delete ((::R3BSofTWIM*)p);
   }
   static void deleteArray_R3BSofTWIM(void *p) {
      delete [] ((::R3BSofTWIM*)p);
   }
   static void destruct_R3BSofTWIM(void *p) {
      typedef ::R3BSofTWIM current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSofTWIM

//______________________________________________________________________________
void R3BSofTwimContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSofTwimContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSofTwimContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSofTwimContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSofTwimContFact(void *p) {
      return  p ? new(p) ::R3BSofTwimContFact : new ::R3BSofTwimContFact;
   }
   static void *newArray_R3BSofTwimContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSofTwimContFact[nElements] : new ::R3BSofTwimContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSofTwimContFact(void *p) {
      delete ((::R3BSofTwimContFact*)p);
   }
   static void deleteArray_R3BSofTwimContFact(void *p) {
      delete [] ((::R3BSofTwimContFact*)p);
   }
   static void destruct_R3BSofTwimContFact(void *p) {
      typedef ::R3BSofTwimContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSofTwimContFact

namespace {
  void TriggerDictionaryInitialization_G__R3BSofTwimDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/mnt/scratch1/r3broot/R3BRoot/r3bbase",
"/mnt/scratch1/r3broot/R3BRoot/r3bdata",
"/mnt/scratch1/r3broot/R3BRoot/tracking",
"/mnt/scratch1/r3broot/R3BRoot/sofia/sofdata",
"/mnt/scratch1/r3broot/R3BRoot/sofia/sofdata/twimData",
"/mnt/scratch1/r3broot/R3BRoot/sofia/tcal",
"/mnt/scratch1/r3broot/R3BRoot/sofia/twim",
"/mnt/scratch1/fairsoft_install/may18/include/root",
"/mnt/scratch1/fairsoft_install/may18/include",
"/mnt/scratch1/fairroot_install/include",
"/mnt/scratch1/fairsoft_install/may18/include/root",
"/mnt/scratch1/r3broot/build_new2/sofia/twim/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BSofTwimDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BSofTWIM;
class __attribute__((annotate(R"ATTRDUMP(Factory for all TWIM parameter containers)ATTRDUMP"))) R3BSofTwimContFact;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BSofTwimDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#ifndef R3BSOFTWIM_H
#define R3BSOFTWIM_H

#include "R3BDetector.h"
#include "TLorentzVector.h"
#include <map>

class TClonesArray;
class R3BSofTWIMPoint;
class FairVolume;
class TGeoRotation;

class R3BSofTWIM : public R3BDetector
{
  public:
    /** Default constructor */
    R3BSofTWIM();

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param trans   position
     *@param rot     rotation
     */
    R3BSofTWIM(const TString& geoFile, const TGeoTranslation& trans, const TGeoRotation& rot = TGeoRotation());

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param combi   position + rotation
     */
    R3BSofTWIM(const TString& geoFile, const TGeoCombiTrans& combi = TGeoCombiTrans());

    /** Destructor **/
    ~R3BSofTWIM();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the
     ** active volume. Creates a R3BSofTWIMPoint and adds it
     ** to the collection.
     *@param vol  Pointer to the active volume
     **/
    virtual Bool_t ProcessHits(FairVolume* vol = 0);

    /** Virtual method BeginEvent
     **
     ** Actions at the begin of the event
     **/
    virtual void BeginEvent();

    /** Virtual method EndOfEvent
     **
     ** If verbosity level is set, print hit collection at the
     ** end of the event and resets it afterwards.
     **/
    virtual void EndOfEvent();

    /** Virtual method Register
     **
     ** Registers the hit collection in the ROOT manager.
     **/
    virtual void Register();

    /** Accessor to the hit collection **/
    virtual TClonesArray* GetCollection(Int_t iColl) const;

    /** Virtual method Print
     **
     ** Screen output of hit collection.
     **/
    virtual void Print(Option_t* option = "") const;

    /** Virtual method Reset
     **
     ** Clears the hit collection
     **/
    virtual void Reset();

    /** Virtual method CopyClones
     **
     ** Copies the hit collection with a given track index offset
     *@param cl1     Origin
     *@param cl2     Target
     *@param offset  Index offset
     **/
    virtual void CopyClones(TClonesArray* cl1, TClonesArray* cl2, Int_t offset);

    virtual Bool_t CheckIfSensitive(std::string name);

    /** Public method SetNonUniformity
     **
     ** Defines the fNonUniformity parameter in % deviation from the central value
     *@param nonU  Double parameter setting the maximum non-uniformity allowed
     **/

    virtual void Initialize();
    virtual void SetSpecialPhysicsCuts() {}

    //  void SaveGeoParams();

  private:
    /** Track information to be stored until the track leaves the
        active volume. **/
    Int_t fTrackID;                 //!  track index
    Int_t fTrackPID;                //!  particle identification
    Int_t fVolumeID;                //!  volume id
    Int_t fDetCopyID;               //!  Det volume id
    Double_t fZ;                    //!  atomic number fragment
    Double_t fA;                    //!  mass number fragment
    Int_t fParentTrackID;           //!  parent track index
    Int_t fUniqueID;                //!  particle unique id (e.g. if Delta electron, fUniqueID=9)
    TLorentzVector fPosIn, fPosOut; //!  position
    TLorentzVector fMomIn, fMomOut; //!  momentum
    Double32_t fTime;               //!  time
    Double32_t fLength;             //!  length
    Double32_t fELoss;              //!  energy loss
    Int_t fPosIndex;                //!
    Int_t fNSteps;                  //!  Number of steps in the active volume
    Double32_t fEinc;               //!  Total incident energy
    Bool_t kGeoSaved;               //!
    TList* flGeoPar;                //!

    TClonesArray* fSofTWIMCollection; //!  The point collection

    /** Private method AddHit
     **
     ** Adds a SofTWIMPoint to the HitCollection
     **/
    R3BSofTWIMPoint* AddPoint(Int_t trackID,
                              Int_t detID,
                              Int_t volid,
                              Double_t Z,
                              Double_t A,
                              TVector3 posIn,
                              TVector3 pos_out,
                              TVector3 momIn,
                              TVector3 momOut,
                              Double_t time,
                              Double_t length,
                              Double_t eLoss);

    /** Private method ResetParameters
     **
     ** Resets the private members for the track parameters
     **/
    void ResetParameters();

    TGeoRotation* createMatrix(Double_t phi, Double_t theta, Double_t psi);

    ClassDef(R3BSofTWIM, 1);
};

inline void R3BSofTWIM::ResetParameters()
{
    fTrackID = fVolumeID = fParentTrackID = fTrackPID = fUniqueID = 0;
    fDetCopyID = 0;
    fPosIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fPosOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fMomIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fMomOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fTime = fLength = fELoss = fEinc = fZ = fA = 0;
    fPosIndex = 0;
    fNSteps = 0;
};

#endif
#ifndef R3BSofTwimContFact_H
#define R3BSofTwimContFact_H

#include "FairContFact.h"

class FairContainer;

class R3BSofTwimContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    R3BSofTwimContFact();
    ~R3BSofTwimContFact() {}
    FairParSet* createContainer(FairContainer*);
    void activateParIo(FairParIo* io);
    ClassDef(R3BSofTwimContFact, 0) // Factory for all TWIM parameter containers
};

#endif /* !R3BSofTwimContFact_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BSofTWIM", payloadCode, "@",
"R3BSofTwimContFact", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BSofTwimDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BSofTwimDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BSofTwimDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BSofTwimDict() {
  TriggerDictionaryInitialization_G__R3BSofTwimDict_Impl();
}
