/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: MERGE_backup
 *** Description: Template for a Basic Function Block Type
 *** Version:
***     1.0: 2021-11-05/Tuojian Lyu -  - 
 *************************************************************************/

#include "MERGE_backup.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "MERGE_backup_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_MERGE_backup, g_nStringIdMERGE_backup)

const CStringDictionary::TStringId FORTE_MERGE_backup::scm_anDataInputNames[] = {g_nStringIdOPCUA, g_nStringIdPIN, g_nStringIdSTATUS_OPC, g_nStringIdSTATUS_PIN};

const CStringDictionary::TStringId FORTE_MERGE_backup::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_MERGE_backup::scm_anDataOutputNames[] = {g_nStringIdOUT, g_nStringIdSTATUS};

const CStringDictionary::TStringId FORTE_MERGE_backup::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING};

const TDataIOID FORTE_MERGE_backup::scm_anEIWith[] = {0, 1, 2, 3, 255, 0, 1, 2, 3, 255};
const TForteInt16 FORTE_MERGE_backup::scm_anEIWithIndexes[] = {0, 5};
const CStringDictionary::TStringId FORTE_MERGE_backup::scm_anEventInputNames[] = {g_nStringIdREQ_OPC, g_nStringIdREQ_PIN};

const TDataIOID FORTE_MERGE_backup::scm_anEOWith[] = {0, 1, 255};
const TForteInt16 FORTE_MERGE_backup::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_MERGE_backup::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_MERGE_backup::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_MERGE_backup::setInitialValues() {
}

void FORTE_MERGE_backup::alg_OPC(void) {
  st_OUT() = st_OPCUA();
}

void FORTE_MERGE_backup::alg_PIN(void) {
  st_OUT() = st_PIN();
}


void FORTE_MERGE_backup::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_MERGE_backup::enterStateOPC(void) {
  m_nECCState = scm_nStateOPC;
  alg_OPC();
  sendOutputEvent(scm_nEventCNFID);
}

void FORTE_MERGE_backup::enterStatePIN(void) {
  m_nECCState = scm_nStatePIN;
  alg_PIN();
  sendOutputEvent(scm_nEventCNFID);
}


void FORTE_MERGE_backup::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do {
    bTransitionCleared = true;
    switch(m_nECCState) {
      case scm_nStateSTART:
        if(scm_nEventREQ_OPCID == pa_nEIID)
          enterStateOPC();
        else
        if(scm_nEventREQ_PINID == pa_nEIID)
          enterStatePIN();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateOPC:
        if(1)
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStatePIN:
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


