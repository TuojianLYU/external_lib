/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: VisionSensor
 *** Description: Basic FB with empty ECC
 *** Version:
***     1.0: 2022-01-11/Tuojian Lyu -  - 
 *************************************************************************/

#include "VisionSensor.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "VisionSensor_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_VisionSensor, g_nStringIdVisionSensor)

const CStringDictionary::TStringId FORTE_VisionSensor::scm_anDataInputNames[] = {g_nStringIdVSB0, g_nStringIdVSB1, g_nStringIdVSB2, g_nStringIdVSB3, g_nStringIdAtExit};

const CStringDictionary::TStringId FORTE_VisionSensor::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_VisionSensor::scm_anDataOutputNames[] = {g_nStringIdBlue, g_nStringIdGrey, g_nStringIdGreen};

const CStringDictionary::TStringId FORTE_VisionSensor::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TDataIOID FORTE_VisionSensor::scm_anEIWith[] = {0, 1, 2, 3, 4, 255};
const TForteInt16 FORTE_VisionSensor::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_VisionSensor::scm_anEventInputNames[] = {g_nStringIdEI1};

const TDataIOID FORTE_VisionSensor::scm_anEOWith[] = {0, 1, 2, 255};
const TForteInt16 FORTE_VisionSensor::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_VisionSensor::scm_anEventOutputNames[] = {g_nStringIdEO1};


const SFBInterfaceSpec FORTE_VisionSensor::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  5, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_VisionSensor::setInitialValues() {
}

void FORTE_VisionSensor::alg_ALG1(void) {
  if((st_AtExit() == true)) {
  	if(((st_VSB0() == true) && (st_VSB1() == true))) {
  		st_Blue() = true;
  	}
  	else if(((st_VSB0() == true) && (st_VSB3() == true))) {
  		st_Grey() = true;
  	}
  	else if(((st_VSB1() == true) && (st_VSB2() == true))) {
  		st_Green() = true;
  	}
  }
  else {
  	st_Blue() = false;
  	st_Grey() = false;
  	st_Green() = false;
  }
}


void FORTE_VisionSensor::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_VisionSensor::enterStateState(void) {
  m_nECCState = scm_nStateState;
  alg_ALG1();
  sendOutputEvent(scm_nEventEO1ID);
}


void FORTE_VisionSensor::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do {
    bTransitionCleared = true;
    switch(m_nECCState) {
      case scm_nStateSTART:
        if(scm_nEventEI1ID == pa_nEIID)
          enterStateState();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState:
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


