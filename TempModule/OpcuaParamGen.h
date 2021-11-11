/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: OpcuaParamGen
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     1.0: 2021-11-11/Tuojian Lyu -  - 
 *************************************************************************/

#ifndef _OPCUAPARAMGEN_H_
#define _OPCUAPARAMGEN_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_wstring.h"
#include "forte_array_at.h"


class FORTE_OpcuaParamGen: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_OpcuaParamGen)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventREQID = 0;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventCNFID = 0;
  
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

  CIEC_WSTRING &st_address() {
    return *static_cast<CIEC_WSTRING*>(getDI(0));
  }
  
  CIEC_WSTRING &st_variable() {
    return *static_cast<CIEC_WSTRING*>(getDI(1));
  }
  
  CIEC_WSTRING &st_method() {
    return *static_cast<CIEC_WSTRING*>(getDI(2));
  }
  
  CIEC_WSTRING &st_out() {
    return *static_cast<CIEC_WSTRING*>(getDO(0));
  }
  

  FORTE_FB_DATA_ARRAY(1, 3, 1, 0);

public:
  FORTE_OpcuaParamGen(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_OpcuaParamGen() = default;
};

#endif // _OPCUAPARAMGEN_H_


