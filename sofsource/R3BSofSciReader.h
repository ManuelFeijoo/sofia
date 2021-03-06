#ifndef R3BSOFSCIREADER_H
#define R3BSOFSCIREADER_H

#include "R3BReader.h"
#include "TClonesArray.h"

struct EXT_STR_h101_SOFSCI_t;
typedef struct EXT_STR_h101_SOFSCI_t EXT_STR_h101_SOFSCI;
class FairLogger;

class R3BSofSciReader : public R3BReader
{
 public:
  R3BSofSciReader(EXT_STR_h101_SOFSCI *, UInt_t);
  ~R3BSofSciReader();

  Bool_t Init(ext_data_struct_info *);
  Bool_t Read();
  void Reset();

 private:
  /* Reader specific data structure from ucesb */
  EXT_STR_h101_SOFSCI* fData;
  /* Data offset */
  UInt_t fOffset;
  /* FairLogger */
  FairLogger*	fLogger;
  /* the structs of type R3BSofSciMapped Item */
  TClonesArray* fArray; /**< Output array. */


 public:
  ClassDef(R3BSofSciReader, 0);
};

#endif
