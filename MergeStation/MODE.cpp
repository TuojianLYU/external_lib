/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: MODE
 *** Description: Template for a Basic Function Block Type
 *** Version:
***     1.0: 2021-11-05/Tuojian Lyu -  - 
 *************************************************************************/

#include "MODE.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "MODE_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_MODE, g_nStringIdMODE)

const CStringDictionary::TStringId FORTE_MODE::scm_anDataInputNames[] = {g_nStringIdMODE, g_nStringIdOPCUA, g_nStringIdPIN};

const CStringDictionary::TStringId FORTE_MODE::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdSTRING};

const CStringDictionary::TStringId FORTE_MODE::scm_anDataOutputNames[] = {g_nStringIdOUT, g_nStringIdOUT1};

const CStringDictionary::TStringId FORTE_MODE::scm_anDataOutputTypeIds[] = {g_nStringIdWSTRING, g_nStringIdSTRING};

const TDataIOID FORTE_MODE::scm_anEIWith[] = {0, 1, 2, 255};
const TForteInt16 FORTE_MODE::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_MODE::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_MODE::scm_anEOWith[] = {0, 255, 1, 255};
const TForteInt16 FORTE_MODE::scm_anEOWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_MODE::scm_anEventOutputNames[] = {g_nStringIdCNF_OPCUA, g_nStringIdCNF_PIN};


const SFBInterfaceSpec FORTE_MODE::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_MODE::setInitialValues() {
}

void FORTE_MODE::alg_opcua(void) {
  st_OUT() = st_OPCUA();
}

void FORTE_MODE::alg_gpio(void) {
  st_OUT1() = st_PIN();
  st_OUT() = st_OPCUA();
}


void FORTE_MODE::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_MODE::enterStateOPCUA(void) {
  m_nECCState = scm_nStateOPCUA;
  alg_opcua();
  sendOutputEvent(scm_nEventCNF_OPCUAID);
}

void FORTE_MODE::enterStatePin(void) {
  m_nECCState = scm_nStatePin;
  alg_gpio();
  sendOutputEvent(scm_nEventCNF_PINID);
}


void FORTE_MODE::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do {
    bTransitionCleared = true;
    switch(m_nECCState) {
      case scm_nStateSTART:
        if((scm_nEventREQID == pa_nEIID) && ((st_MODE() == true)))
          enterStateOPCUA();
        else
        if((scm_nEventREQID == pa_nEIID) && ((st_MODE() == false)))
          enterStatePin();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateOPCUA:
        if(1)
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStatePin:
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


