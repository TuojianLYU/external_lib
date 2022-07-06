/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Conveyor2Check2
 *** Description: Template for a Basic Function Block Type
 *** Version:
***     1.0: 2021-07-28/Tuojian Lyu -  - 
 *************************************************************************/

#include "Conveyor2Check2.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Conveyor2Check2_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Conveyor2Check2, g_nStringIdConveyor2Check2)

const CStringDictionary::TStringId FORTE_Conveyor2Check2::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdTransLeft1, g_nStringIdTransLeft2};

const CStringDictionary::TStringId FORTE_Conveyor2Check2::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_Conveyor2Check2::scm_anDataOutputNames[] = {g_nStringIdQO};

const CStringDictionary::TStringId FORTE_Conveyor2Check2::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_Conveyor2Check2::scm_anEIWith[] = {0, 1, 2, 255, 0, 1, 2, 255};
const TForteInt16 FORTE_Conveyor2Check2::scm_anEIWithIndexes[] = {0, 4};
const CStringDictionary::TStringId FORTE_Conveyor2Check2::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_Conveyor2Check2::scm_anEOWith[] = {0, 255, 0, 255};
const TForteInt16 FORTE_Conveyor2Check2::scm_anEOWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_Conveyor2Check2::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Conveyor2Check2::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_Conveyor2Check2::setInitialValues() {
}

void FORTE_Conveyor2Check2::alg_update(void) {
  if((((true == st_QI()) || (true == st_TransLeft1())) || (true == st_TransLeft2()))) {
  	st_QO() = false;
  }
  else {
  	st_QO() = true;
  }
}


void FORTE_Conveyor2Check2::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_Conveyor2Check2::enterStateWork(void) {
  m_nECCState = scm_nStateWork;
  alg_update();
  sendOutputEvent(scm_nEventCNFID);
}


void FORTE_Conveyor2Check2::executeEvent(int pa_nEIID){
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


