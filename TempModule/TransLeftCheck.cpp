/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: TransLeftCheck
 *** Description: Template for a Basic Function Block Type
 *** Version:
***     1.0: 2021-07-28/Tuojian Lyu -  - 
 *************************************************************************/

#include "TransLeftCheck.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "TransLeftCheck_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_TransLeftCheck, g_nStringIdTransLeftCheck)

const CStringDictionary::TStringId FORTE_TransLeftCheck::scm_anDataInputNames[] = {g_nStringIdAtTrans2, g_nStringIdAtEntry1, g_nStringIdLoad1, g_nStringIdAtTrans1};

const CStringDictionary::TStringId FORTE_TransLeftCheck::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_TransLeftCheck::scm_anDataOutputNames[] = {g_nStringIdQO};

const CStringDictionary::TStringId FORTE_TransLeftCheck::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_TransLeftCheck::scm_anEIWith[] = {1, 255, 1, 2, 0, 3, 255};
const TForteInt16 FORTE_TransLeftCheck::scm_anEIWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_TransLeftCheck::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_TransLeftCheck::scm_anEOWith[] = {0, 255, 0, 255};
const TForteInt16 FORTE_TransLeftCheck::scm_anEOWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_TransLeftCheck::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_TransLeftCheck::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_TransLeftCheck::setInitialValues() {
}

void FORTE_TransLeftCheck::alg_startAlg(void) {
  if(((false == st_QO()) && (true == st_AtTrans2()))) {
  	st_QO() = true;
  }
  if(((true == st_QO()) && (true == st_AtTrans1()))) {
  	st_QO() = false;
  }
  if((true == st_AtEntry1())) {
  	st_QO() = false;
  }
}


void FORTE_TransLeftCheck::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_TransLeftCheck::enterStateStart(void) {
  m_nECCState = scm_nStateStart;
  alg_startAlg();
  sendOutputEvent(scm_nEventCNFID);
}


void FORTE_TransLeftCheck::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do {
    bTransitionCleared = true;
    switch(m_nECCState) {
      case scm_nStateSTART:
        if(scm_nEventREQID == pa_nEIID)
          enterStateStart();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateStart:
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


