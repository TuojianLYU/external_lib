/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: SorterCheck
 *** Description: Basic FB with empty ECC
 *** Version:
***     1.0: 2022-01-10/Tuojian Lyu -  - 
 *************************************************************************/

#include "SorterCheck.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "SorterCheck_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_SorterCheck, g_nStringIdSorterCheck)

const CStringDictionary::TStringId FORTE_SorterCheck::scm_anDataInputNames[] = {g_nStringIdDI1};

const CStringDictionary::TStringId FORTE_SorterCheck::scm_anDataInputTypeIds[] = {g_nStringIdINT};

const CStringDictionary::TStringId FORTE_SorterCheck::scm_anDataOutputNames[] = {g_nStringIdDO1};

const CStringDictionary::TStringId FORTE_SorterCheck::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_SorterCheck::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_SorterCheck::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_SorterCheck::scm_anEventInputNames[] = {g_nStringIdEI1};

const TDataIOID FORTE_SorterCheck::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_SorterCheck::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_SorterCheck::scm_anEventOutputNames[] = {g_nStringIdEO1};


const SFBInterfaceSpec FORTE_SorterCheck::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_SorterCheck::setInitialValues() {
}

void FORTE_SorterCheck::alg_ALG1(void) {
  if((st_DI1() == 3)) {
  	st_DO1() = true;
  }
}


void FORTE_SorterCheck::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_SorterCheck::enterStateSorter1(void) {
  m_nECCState = scm_nStateSorter1;
  alg_ALG1();
  sendOutputEvent(scm_nEventEO1ID);
}


void FORTE_SorterCheck::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do {
    bTransitionCleared = true;
    switch(m_nECCState) {
      case scm_nStateSTART:
        if(scm_nEventEI1ID == pa_nEIID)
          enterStateSorter1();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateSorter1:
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


