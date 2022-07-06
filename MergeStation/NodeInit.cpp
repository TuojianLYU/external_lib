/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: NodeInit
 *** Description: Template for a Basic Function Block Type
 *** Version:
***     1.0: 2021-07-28/Tuojian Lyu -  - 
 *************************************************************************/

#include "NodeInit.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "NodeInit_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_NodeInit, g_nStringIdNodeInit)

const CStringDictionary::TStringId FORTE_NodeInit::scm_anDataInputNames[] = {g_nStringIdTransLeft1, g_nStringIdConveyor2, g_nStringIdStart, g_nStringIdLoad2, g_nStringIdAtEntry2, g_nStringIdAtTrans1, g_nStringIdReset, g_nStringIdExitConv, g_nStringIdTransLeft2, g_nStringIdAtExit, g_nStringIdLoad1, g_nStringIdAtTrans2, g_nStringIdConveyor1, g_nStringIdAtEntry1};

const CStringDictionary::TStringId FORTE_NodeInit::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_NodeInit::scm_anDataOutputNames[] = {g_nStringIdQO};

const CStringDictionary::TStringId FORTE_NodeInit::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_NodeInit::scm_anEIWith[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 255};
const TForteInt16 FORTE_NodeInit::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_NodeInit::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_NodeInit::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_NodeInit::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_NodeInit::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_NodeInit::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  14, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_NodeInit::setInitialValues() {
}

void FORTE_NodeInit::alg_init(void) {
}


void FORTE_NodeInit::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_NodeInit::enterStateInit(void) {
  m_nECCState = scm_nStateInit;
  alg_init();
  sendOutputEvent(scm_nEventCNFID);
}


void FORTE_NodeInit::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do {
    bTransitionCleared = true;
    switch(m_nECCState) {
      case scm_nStateSTART:
        if(1)
          enterStateInit();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateInit:
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


