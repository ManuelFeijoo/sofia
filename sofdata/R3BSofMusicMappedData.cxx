// -------------------------------------------------------------------------
// -----                      R3BSofMusicMappedData source file              -----
// -------------------------------------------------------------------------

#include "R3BSofMusicMappedData.h"


// -----   Default constructor   -------------------------------------------
R3BSofMusicMappedData::R3BSofMusicMappedData() 
: fSecID(0),
  fAnodeID(0),
  fTime(0),
  fEnergy(0) 
{
}
// -------------------------------------------------------------------------


// -----   Standard constructor   ------------------------------------------
R3BSofMusicMappedData::R3BSofMusicMappedData(UChar_t secID, UChar_t anodeID,
					     UShort_t time, UShort_t energy) 
  : fSecID(secID)
  , fAnodeID(anodeID)
  , fTime(time)
  , fEnergy(energy)
{
}
// -------------------------------------------------------------------------

ClassImp(R3BSofMusicMappedData)
