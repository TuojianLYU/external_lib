/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: MERGE
 *** Description: Template for a Basic Function Block Type
 *** Version:
***     1.0: 2021-11-05/Tuojian Lyu -  - 
 *************************************************************************/

#ifndef _MERGE_H_
#define _MERGE_H_

#include "basicfb.h"
#include "forte_bool.h"
#include "forte_array_at.h"


class FORTE_MERGE: public CBasicFB {
  DECLARE_FIRMWARE_FB(FORTE_MERGE)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventREQ_OPCID = 0;
  static const TEventID scm_nEventREQ_PINID = 1;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventCNFID = 0;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

virtual void setInitialValues();
  CIEC_BOOL &st_OPCUA() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_BOOL &st_PIN() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  }
  
  CIEC_BOOL &st_OUT() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  

  void alg_OPC(void);
  void alg_PIN(void);

  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateOPC = 1;
  static const TForteInt16 scm_nStatePIN = 2;
  
  void enterStateSTART(void);
  void enterStateOPC(void);
  void enterStatePIN(void);

  virtual void executeEvent(int pa_nEIID);

  FORTE_BASIC_FB_DATA_ARRAY(1, 2, 1, 0, 0);

public:
  FORTE_MERGE(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, nullptr, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_MERGE() = default;
};

#endif // _MERGE_H_


