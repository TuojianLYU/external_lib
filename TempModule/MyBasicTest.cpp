/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: MyBasicTest
 *** Description: Template for a Basic Function Block Type
 *** Version:
***     1.0: 2021-08-04/Tuojian Lyu -  - 
 *************************************************************************/

#include "MyBasicTest.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "MyBasicTest_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_MyBasicTest, g_nStringIdMyBasicTest)

const CStringDictionary::TStringId FORTE_MyBasicTest::scm_anDataInputNames[] = {g_nStringIdQI};

const CStringDictionary::TStringId FORTE_MyBasicTest::scm_anDataInputTypeIds[] = {g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_MyBasicTest::scm_anDataOutputNames[] = {g_nStringIdQO};

const CStringDictionary::TStringId FORTE_MyBasicTest::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_MyBasicTest::scm_anEIWith[] = {0, 255, 0, 255};
const TForteInt16 FORTE_MyBasicTest::scm_anEIWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_MyBasicTest::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_MyBasicTest::scm_anEOWith[] = {0, 255, 0, 255};
const TForteInt16 FORTE_MyBasicTest::scm_anEOWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_MyBasicTest::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_MyBasicTest::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_MyBasicTest::setInitialValues() {
}

void FORTE_MyBasicTest::alg_initialize(void) {
  st_QO() = st_QI();
}

void FORTE_MyBasicTest::alg_deInitialize(void) {
  st_QO() = false;
}

void FORTE_MyBasicTest::alg_normalOperation(void) {
  st_QO() = st_QI();
  if((true == st_QI())) {
  }
}


void FORTE_MyBasicTest::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_MyBasicTest::enterStateInit(void) {
  m_nECCState = scm_nStateInit;
  alg_initialize();
  sendOutputEvent(scm_nEventINITOID);
}

void FORTE_MyBasicTest::enterStateNormalOp(void) {
  m_nECCState = scm_nStateNormalOp;
  alg_normalOperation();
  sendOutputEvent(scm_nEventCNFID);
}

void FORTE_MyBasicTest::enterStateInitialized(void) {
  m_nECCState = scm_nStateInitialized;
}

void FORTE_MyBasicTest::enterStateDeInit(void) {
  m_nECCState = scm_nStateDeInit;
  alg_deInitialize();
  sendOutputEvent(scm_nEventINITOID);
}


void FORTE_MyBasicTest::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do {
    bTransitionCleared = true;
    switch(m_nECCState) {
      case scm_nStateSTART:
        if((scm_nEventINITID == pa_nEIID) && ((true == st_QI())))
          enterStateInit();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateInit:
        if(1)
          enterStateInitialized();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateNormalOp:
        if(1)
          enterStateInitialized();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateInitialized:
        if(scm_nEventREQID == pa_nEIID)
          enterStateNormalOp();
        else
        if((scm_nEventINITID == pa_nEIID) && ((false == st_QI())))
          enterStateDeInit();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateDeInit:
        if(1)
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
        DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 5.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; // 0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID; // we have to clear the event after the first check in order to ensure correct behavior
  } while(bTransitionCleared);
}


