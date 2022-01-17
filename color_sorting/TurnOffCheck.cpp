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

#include "TurnOffCheck.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "TurnOffCheck_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_TurnOffCheck, g_nStringIdTurnOffCheck)

const CStringDictionary::TStringId FORTE_TurnOffCheck::scm_anDataInputNames[] = {g_nStringIdAtExit};

const CStringDictionary::TStringId FORTE_TurnOffCheck::scm_anDataInputTypeIds[] = {g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_TurnOffCheck::scm_anDataOutputNames[] = {g_nStringIdTurnOff};

const CStringDictionary::TStringId FORTE_TurnOffCheck::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_TurnOffCheck::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_TurnOffCheck::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_TurnOffCheck::scm_anEventInputNames[] = {g_nStringIdEI1};

const TDataIOID FORTE_TurnOffCheck::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_TurnOffCheck::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_TurnOffCheck::scm_anEventOutputNames[] = {g_nStringIdEO1};


const SFBInterfaceSpec FORTE_TurnOffCheck::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_TurnOffCheck::setInitialValues() {
}

void FORTE_TurnOffCheck::alg_ALG1(void) {
  if((st_AtExit() == false)) {
  	st_TurnOff() = false;
  }
  else {
  	st_TurnOff() = true;
  }
}


void FORTE_TurnOffCheck::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_TurnOffCheck::enterStateState(void) {
  m_nECCState = scm_nStateState;
  alg_ALG1();
  sendOutputEvent(scm_nEventEO1ID);
}


void FORTE_TurnOffCheck::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do {
    bTransitionCleared = true;
    switch(m_nECCState) {
      case scm_nStateSTART:
        if(scm_nEventEI1ID == pa_nEIID)
          enterStateState();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState:
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


