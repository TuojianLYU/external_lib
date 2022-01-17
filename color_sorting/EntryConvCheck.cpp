/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: EntryConvCheck
 *** Description: Basic FB with empty ECC
 *** Version:
***     1.0: 2022-01-11/Tuojian Lyu -  - 
 *************************************************************************/

#include "EntryConvCheck.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "EntryConvCheck_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_EntryConvCheck, g_nStringIdEntryConvCheck)

const CStringDictionary::TStringId FORTE_EntryConvCheck::scm_anDataInputNames[] = {g_nStringIdBlue, g_nStringIdGrey, g_nStringIdGreen};

const CStringDictionary::TStringId FORTE_EntryConvCheck::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_EntryConvCheck::scm_anDataOutputNames[] = {g_nStringIdConv};

const CStringDictionary::TStringId FORTE_EntryConvCheck::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_EntryConvCheck::scm_anEIWith[] = {0, 1, 2, 255};
const TForteInt16 FORTE_EntryConvCheck::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_EntryConvCheck::scm_anEventInputNames[] = {g_nStringIdEI1};

const TDataIOID FORTE_EntryConvCheck::scm_anEOWith[] = {0, 255, 0, 255};
const TForteInt16 FORTE_EntryConvCheck::scm_anEOWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_EntryConvCheck::scm_anEventOutputNames[] = {g_nStringIdConvEO, g_nStringIdSorterEO};


const SFBInterfaceSpec FORTE_EntryConvCheck::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_EntryConvCheck::setInitialValues() {
}

void FORTE_EntryConvCheck::alg_ALG1(void) {
  st_Conv() = false;
}

void FORTE_EntryConvCheck::alg_ALG2(void) {
  st_Conv() = true;
}


void FORTE_EntryConvCheck::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_EntryConvCheck::enterStateState(void) {
  m_nECCState = scm_nStateState;
  alg_ALG1();
  sendOutputEvent(scm_nEventConvEOID);
}

void FORTE_EntryConvCheck::enterStateState_1(void) {
  m_nECCState = scm_nStateState_1;
  alg_ALG2();
  sendOutputEvent(scm_nEventSorterEOID);
}


void FORTE_EntryConvCheck::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do {
    bTransitionCleared = true;
    switch(m_nECCState) {
      case scm_nStateSTART:
        if((scm_nEventEI1ID == pa_nEIID) && (((st_Blue() || st_Grey()) || st_Green())))
          enterStateState();
        else
        if((scm_nEventEI1ID == pa_nEIID) && ((((st_Blue() == false) && (st_Grey() == false)) && (st_Green() == false))))
          enterStateState_1();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState:
        if(1)
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_1:
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


