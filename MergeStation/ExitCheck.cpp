/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ExitCheck
 *** Description: Template for a Basic Function Block Type
 *** Version:
***     1.0: 2021-07-29/Tuojian Lyu -  - 
 *************************************************************************/

#include "ExitCheck.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ExitCheck_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_ExitCheck, g_nStringIdExitCheck)

const CStringDictionary::TStringId FORTE_ExitCheck::scm_anDataInputNames[] = {g_nStringIdAtExit};

const CStringDictionary::TStringId FORTE_ExitCheck::scm_anDataInputTypeIds[] = {g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_ExitCheck::scm_anDataOutputNames[] = {g_nStringIdQO};

const CStringDictionary::TStringId FORTE_ExitCheck::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_ExitCheck::scm_anEIWith[] = {0, 255, 0, 255};
const TForteInt16 FORTE_ExitCheck::scm_anEIWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_ExitCheck::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_ExitCheck::scm_anEOWith[] = {0, 255, 0, 255};
const TForteInt16 FORTE_ExitCheck::scm_anEOWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_ExitCheck::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_ExitCheck::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_ExitCheck::setInitialValues() {
}

void FORTE_ExitCheck::alg_ALG1(void) {
  if((true == st_AtExit())) {
  	st_QO() = true;
  }
}


void FORTE_ExitCheck::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_ExitCheck::enterStateWork(void) {
  m_nECCState = scm_nStateWork;
  alg_ALG1();
  sendOutputEvent(scm_nEventCNFID);
}


void FORTE_ExitCheck::executeEvent(int pa_nEIID){
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


