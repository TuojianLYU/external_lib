/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: MODE_backup
 *** Description: Template for a Basic Function Block Type
 *** Version:
***     1.0: 2021-11-05/Tuojian Lyu -  - 
 *************************************************************************/

#ifndef _MODE_BACKUP_H_
#define _MODE_BACKUP_H_

#include "basicfb.h"
#include "forte_bool.h"
#include "forte_string.h"
#include "forte_wstring.h"
#include "forte_array_at.h"


class FORTE_MODE_backup: public CBasicFB {
  DECLARE_FIRMWARE_FB(FORTE_MODE_backup)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventREQID = 0;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventCNF_OPCUAID = 0;
  static const TEventID scm_nEventCNF_PINID = 1;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

virtual void setInitialValues();
  CIEC_BOOL &st_MODE() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_WSTRING &st_OPCUA() {
    return *static_cast<CIEC_WSTRING*>(getDI(1));
  }
  
  CIEC_STRING &st_PIN() {
    return *static_cast<CIEC_STRING*>(getDI(2));
  }
  
  CIEC_WSTRING &st_OUT() {
    return *static_cast<CIEC_WSTRING*>(getDO(0));
  }
  
  CIEC_STRING &st_OUT1() {
    return *static_cast<CIEC_STRING*>(getDO(1));
  }
  

  void alg_opcua(void);
  void alg_gpio(void);

  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateOPCUA = 1;
  static const TForteInt16 scm_nStatePin = 2;
  
  void enterStateSTART(void);
  void enterStateOPCUA(void);
  void enterStatePin(void);

  virtual void executeEvent(int pa_nEIID);

  FORTE_BASIC_FB_DATA_ARRAY(2, 3, 2, 0, 0);

public:
  FORTE_MODE_backup(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, nullptr, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_MODE_backup() = default;
};

#endif // _MODE_BACKUP_H_


