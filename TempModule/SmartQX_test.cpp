/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: SmartQX_test
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     1.0: 2021-11-07/Tuojian Lyu -  - 
 *************************************************************************/

#include "SmartQX_test.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "SmartQX_test_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_SmartQX_test, g_nStringIdSmartQX_test)

const CStringDictionary::TStringId FORTE_SmartQX_test::scm_anDataInputNames[] = {g_nStringIdMODE, g_nStringIdOPC_Variable, g_nStringIdOPC_Address, g_nStringIdIO, g_nStringIdOUT};

const CStringDictionary::TStringId FORTE_SmartQX_test::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdSTRING, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_SmartQX_test::scm_anDataOutputNames[] = {g_nStringIdQO};

const CStringDictionary::TStringId FORTE_SmartQX_test::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_SmartQX_test::scm_anEIWith[] = {0, 1, 3, 2, 4, 255, 0, 1, 3, 2, 4, 255};
const TForteInt16 FORTE_SmartQX_test::scm_anEIWithIndexes[] = {0, 6};
const CStringDictionary::TStringId FORTE_SmartQX_test::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_SmartQX_test::scm_anEOWith[] = {0, 255, 0, 255};
const TForteInt16 FORTE_SmartQX_test::scm_anEOWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_SmartQX_test::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_SmartQX_test::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  5, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_SmartQX_test::scm_astInternalFBs[] = {
  {g_nStringIdCLIENT_1_1, g_nStringIdCLIENT_1_0},
  {g_nStringIdBOOL2BOOL, g_nStringIdBOOL2BOOL},
  {g_nStringIdAPPEND_STRING_3, g_nStringIdAPPEND_STRING_3},
  {g_nStringIdSTRING2STRING_2, g_nStringIdSTRING2STRING},
  {g_nStringIdSTRING2STRING_1, g_nStringIdSTRING2STRING},
  {g_nStringIdSTRING2STRING, g_nStringIdSTRING2STRING},
  {g_nStringIdF_STRING_TO_WSTRING, g_nStringIdF_STRING_TO_WSTRING},
  {g_nStringIdAPPEND_STRING_5, g_nStringIdAPPEND_STRING_3},
  {g_nStringIdMODE, g_nStringIdMODE},
  {g_nStringIdQX, g_nStringIdQX},
  {g_nStringIdMODE_1, g_nStringIdMODE}
};

const SCFB_FBParameter FORTE_SmartQX_test::scm_astParamters[] = {
  {0, g_nStringIdQI, "1"},
  {3, g_nStringIdIN, "#;/Objects/1:"},
  {4, g_nStringIdIN, "opc_ua[WRITE;opc.tcp://"},
  {5, g_nStringIdIN, "]"},
  {9, g_nStringIdQI, "1"},
};

const SCFB_FBConnectionData FORTE_SmartQX_test::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_2, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_5, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_1, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_2, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_5, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_1, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdCNF_OPCUA), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_1, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdCNF_PIN), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE_1, g_nStringIdCNF_OPCUA), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_1, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE_1, g_nStringIdCNF_PIN), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_1, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE_1, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_1, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_1, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_SmartQX_test::scm_astFannedOutEventConnections[] = {
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_1, g_nStringIdREQ), 0},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX, g_nStringIdINIT), 9},
};

const SCFB_FBConnectionData FORTE_SmartQX_test::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_1, g_nStringIdSD_1), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOUT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdOUT), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_5, g_nStringIdIN_3), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_5, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdIN), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_5, g_nStringIdIN_1), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_1, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdIN_1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_2, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdIN_3), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOPC_Address), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdIN_2), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOPC_Variable), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_5, g_nStringIdIN_2), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdOUT), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_1, g_nStringIdID), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdOUT1), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX, g_nStringIdPARAMS), 9},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdMODE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdMODE), 8},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIO), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdPIN), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_1, g_nStringIdQO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_SmartQX_test::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX, g_nStringIdOUT), 9},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE_1, g_nStringIdMODE), 10},
};

const SCFB_FBNData FORTE_SmartQX_test::scm_stFBNData = {
  11, scm_astInternalFBs,
  15, scm_astEventConnections,
  2, scm_astFannedOutEventConnections,
  14, scm_astDataConnections,
  2, scm_astFannedOutDataConnections,
  5, scm_astParamters
};



