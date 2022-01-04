/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Load1Check
 *** Description: Template for a Basic Function Block Type
 *** Version:
***     1.0: 2021-07-29/Tuojian Lyu -  - 
 *************************************************************************/

#include "Load1Check.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Load1Check_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Load1Check, g_nStringIdLoad1Check)

const CStringDictionary::TStringId FORTE_Load1Check::scm_anDataInputNames[] = {g_nStringIdAtTrans1, g_nStringIdAtEntry1, g_nStringIdTransLeft};

const CStringDictionary::TStringId FORTE_Load1Check::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_Load1Check::scm_anDataOutputNames[] = {g_nStringIdQO};

const CStringDictionary::TStringId FORTE_Load1Check::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_Load1Check::scm_anEIWith[] = {0, 255, 0, 1, 2, 255};
const TForteInt16 FORTE_Load1Check::scm_anEIWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_Load1Check::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_Load1Check::scm_anEOWith[] = {0, 255, 0, 255};
const TForteInt16 FORTE_Load1Check::scm_anEOWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_Load1Check::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Load1Check::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_Load1Check::setInitialValues() {
}

void FORTE_Load1Check::alg_updateAlg(void) {
  if(((true == st_AtEntry1()) && (false == st_TransLeft()))) {
  	st_QO() = true;
  }
  if(((true == st_AtTrans1()) && (false == st_TransLeft()))) {
  	st_QO() = true;
  }
  if(((false == st_AtEntry1()) && (false == st_AtTrans1()))) {
  	st_QO() = false;
  }
}

void FORTE_Load1Check::alg_updateAlg_1(void) {
  if((true == st_TransLeft())) {
  	st_QO() = false;
  }
  else {
  	st_QO() = true;
  }
}


void FORTE_Load1Check::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_Load1Check::enterStateWork(void) {
  m_nECCState = scm_nStateWork;
  alg_updateAlg_1();
  sendOutputEvent(scm_nEventCNFID);
}


void FORTE_Load1Check::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do {
    bTransitionCleared = true;
    switch(m_nECCState) {
      case scm_nStateSTART:
        if(scm_nEventREQID == pa_nEIID)
          enterStateWork();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateWork:
        if(1)
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
        DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 2.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; // 0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID; // we have to clear the event after the first check in order to ensure correct behavior
  } while(bTransitionCleared);
}


