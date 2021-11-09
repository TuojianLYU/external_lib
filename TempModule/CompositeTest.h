/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: CompositeTest
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     1.0: 2021-09-02/Tuojian Lyu -  - 
 *************************************************************************/

#ifndef _COMPOSITETEST_H_
#define _COMPOSITETEST_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_bool.h"
#include "forte_string.h"
#include "forte_array_at.h"


class FORTE_CompositeTest: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_CompositeTest)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventCNFID = 1;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

  static const SCFB_FBInstanceData scm_astInternalFBs[];
  static const SCFB_FBParameter scm_astParamters[];
  static const SCFB_FBConnectionData scm_astEventConnections[];
  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];
  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBFannedOutConnectionData scm_astFannedOutDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

  CIEC_BOOL &st_MODE() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_STRING &st_OPCUA() {
    return *static_cast<CIEC_STRING*>(getDI(1));
  }
  
  CIEC_STRING &st_PIN() {
    return *static_cast<CIEC_STRING*>(getDI(2));
  }
  
  CIEC_BOOL &st_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  

  FORTE_FB_DATA_ARRAY(2, 3, 1, 0);

public:
  FORTE_CompositeTest(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_CompositeTest() = default;
};

#endif // _COMPOSITETEST_H_


