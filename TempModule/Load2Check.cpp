/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Load2Check
 *** Description: Template for a Basic Function Block Type
 *** Version:
***     1.0: 2021-07-28/Tuojian Lyu -  - 
 *************************************************************************/

#include "Load2Check.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Load2Check_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Load2Check, g_nStringIdLoad2Check)

const CStringDictionary::TStringId FORTE_Load2Check::scm_anDataInputNames[] = {g_nStringIdAtEntry2, g_nStringIdTransLeft2};

const CStringDictionary::TStringId FORTE_Load2Check::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_Load2Check::scm_anDataOutputNames[] = {g_nStringIdQO};

const CStringDictionary::TStringId FORTE_Load2Check::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_Load2Check::scm_anEIWith[] = {0, 255, 0, 1, 255};
const TForteInt16 FORTE_Load2Check::scm_anEIWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_Load2Check::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_Load2Check::scm_anEOWith[] = {0, 255, 0, 255};
const TForteInt16 FORTE_Load2Check::scm_anEOWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_Load2Check::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Load2Check::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_Load2Check::setInitialValues() {
}

void FORTE_Load2Check::alg_update(void) {
  if(((true == st_AtEntry2()) && (! st_TransLeft2()))) {
  	st_QO() = true;
  }
  else {
  	st_QO() = false;
  }
}


void FORTE_Load2Check::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_Load2Check::enterStateWork(void) {
  m_nECCState = scm_nStateWork;
  alg_update();
  sendOutputEvent(scm_nEventCNFID);
}


void FORTE_Load2Check::executeEvent(int pa_nEIID){
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


