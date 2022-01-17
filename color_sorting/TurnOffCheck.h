/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: TurnOffCheck
 *** Description: Basic FB with empty ECC
 *** Version:
***     1.0: 2022-01-11/Tuojian Lyu -  - 
 *************************************************************************/

#ifndef _TURNOFFCHECK_H_
#define _TURNOFFCHECK_H_

#include "basicfb.h"
#include "forte_bool.h"
#include "forte_array_at.h"


class FORTE_TurnOffCheck: public CBasicFB {
  DECLARE_FIRMWARE_FB(FORTE_TurnOffCheck)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventEI1ID = 0;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventEO1ID = 0;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

virtual void setInitialValues();
  CIEC_BOOL &st_AtExit() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_BOOL &st_TurnOff() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  

  void alg_ALG1(void);

  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateState = 1;
  
  void enterStateSTART(void);
  void enterStateState(void);

  virtual void executeEvent(int pa_nEIID);

  FORTE_BASIC_FB_DATA_ARRAY(1, 1, 1, 0, 0);

public:
  FORTE_TurnOffCheck(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, nullptr, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_TurnOffCheck() = default;
};

#endif // _TURNOFFCHECK_H_


