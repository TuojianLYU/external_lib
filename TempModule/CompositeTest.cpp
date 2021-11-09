/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: CompositeTest
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     1.0: 2021-09-02/Tuojian Lyu -  - 
 *************************************************************************/

#include "CompositeTest.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "CompositeTest_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_CompositeTest, g_nStringIdCompositeTest)

const CStringDictionary::TStringId FORTE_CompositeTest::scm_anDataInputNames[] = {g_nStringIdMODE, g_nStringIdOPCUA, g_nStringIdPIN};

const CStringDictionary::TStringId FORTE_CompositeTest::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING, g_nStringIdSTRING};

const CStringDictionary::TStringId FORTE_CompositeTest::scm_anDataOutputNames[] = {g_nStringIdQO};

const CStringDictionary::TStringId FORTE_CompositeTest::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_CompositeTest::scm_anEIWith[] = {1, 2, 0, 255, 1, 2, 0, 255};
const TForteInt16 FORTE_CompositeTest::scm_anEIWithIndexes[] = {0, 4};
const CStringDictionary::TStringId FORTE_CompositeTest::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_CompositeTest::scm_anEOWith[] = {0, 255, 0, 255};
const TForteInt16 FORTE_CompositeTest::scm_anEOWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_CompositeTest::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_CompositeTest::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_CompositeTest::scm_astInternalFBs[] = {
  {g_nStringIdMODE, g_nStringIdMODE},
  {g_nStringIdIX, g_nStringIdIX},
  {g_nStringIdSUBSCRIBE_1, g_nStringIdSUBSCRIBE_1},
  {g_nStringIdMERGE, g_nStringIdMERGE}
};

const SCFB_FBParameter FORTE_CompositeTest::scm_astParamters[] = {
  {1, g_nStringIdQI, "1"},
  {2, g_nStringIdQI, "1"},
};

const SCFB_FBConnectionData FORTE_CompositeTest::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdCNF_OPCUA), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINIT), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdCNF_PIN), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdINIT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdIND), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMERGE, g_nStringIdREQ_OPC), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdIND), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMERGE, g_nStringIdREQ_PIN), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMERGE, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_CompositeTest::scm_astFannedOutEventConnections[] = {
};

const SCFB_FBConnectionData FORTE_CompositeTest::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdMODE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdMODE), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOPCUA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdOPCUA), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPIN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdPIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdPARAMS), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdIN), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMERGE, g_nStringIdOPCUA), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdIN), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMERGE, g_nStringIdPIN), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMERGE, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_CompositeTest::scm_astFannedOutDataConnections[] = {
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdPARAMS), 1},
};

const SCFB_FBNData FORTE_CompositeTest::scm_stFBNData = {
  4, scm_astInternalFBs,
  6, scm_astEventConnections,
  0, nullptr,
  7, scm_astDataConnections,
  1, scm_astFannedOutDataConnections,
  2, scm_astParamters
};



