/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Conveyor1Check
 *** Description: Template for a Basic Function Block Type
 *** Version:
***     1.0: 2021-07-29/Tuojian Lyu -  - 
 *************************************************************************/

#include "Conveyor1Check.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Conveyor1Check_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Conveyor1Check, g_nStringIdConveyor1Check)

const CStringDictionary::TStringId FORTE_Conveyor1Check::scm_anDataInputNames[] = {g_nStringIdAtEntry1, g_nStringIdAtTrans1, g_nStringIdTransLeft};

const CStringDictionary::TStringId FORTE_Conveyor1Check::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_Conveyor1Check::scm_anDataOutputNames[] = {g_nStringIdQO};

const CStringDictionary::TStringId FORTE_Conveyor1Check::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_Conveyor1Check::scm_anEIWith[] = {0, 255, 0, 1, 2, 255};
const TForteInt16 FORTE_Conveyor1Check::scm_anEIWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_Conveyor1Check::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_Conveyor1Check::scm_anEOWith[] = {0, 255, 0, 255};
const TForteInt16 FORTE_Conveyor1Check::scm_anEOWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_Conveyor1Check::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Conveyor1Check::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_Conveyor1Check::setInitialValues() {
}

void FORTE_Conveyor1Check::alg_Init(void) {
  st_QO() = true;
}

void FORTE_Conveyor1Check::alg_ALG1(void) {
  if((((true == st_AtTrans1()) || (true == st_TransLeft())) && (st_AtEntry1() == false))) {
  	st_QO() = false;
  }
  else {
  	st_QO() = true;
  }
}


void FORTE_Conveyor1Check::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_Conveyor1Check::enterStateInitState(void) {
  m_nECCState = scm_nStateInitState;
  alg_Init();
  sendOutputEvent(scm_nEventINITOID);
}

void FORTE_Conveyor1Check::enterStateWork(void) {
  m_nECCState = scm_nStateWork;
  alg_ALG1();
  sendOutputEvent(scm_nEventCNFID);
}


void FORTE_Conveyor1Check::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do {
    bTransitionCleared = true;
    switch(m_nECCState) {
      case scm_nStateSTART:
        if(scm_nEventINITID == pa_nEIID)
          enterStateInitState();
        else
        if(scm_nEventREQID == pa_nEIID)
          enterStateWork();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateInitState:
        if(1)
          enterStateSTART();
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
        DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 3.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; // 0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID; // we have to clear the event after the first check in order to ensure correct behavior
  } while(bTransitionCleared);
}


