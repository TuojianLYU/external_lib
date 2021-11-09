/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: SmartIX_test
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     1.0: 2021-11-07/Tuojian Lyu -  - 
 *************************************************************************/

#include "SmartIX_test.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "SmartIX_test_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_SmartIX_test, g_nStringIdSmartIX_test)

const CStringDictionary::TStringId FORTE_SmartIX_test::scm_anDataInputNames[] = {g_nStringIdMODE, g_nStringIdOPC_Variable, g_nStringIdOPC_Address, g_nStringIdIO};

const CStringDictionary::TStringId FORTE_SmartIX_test::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdSTRING};

const CStringDictionary::TStringId FORTE_SmartIX_test::scm_anDataOutputNames[] = {g_nStringIdQO};

const CStringDictionary::TStringId FORTE_SmartIX_test::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_SmartIX_test::scm_anEIWith[] = {0, 1, 3, 2, 255, 0, 1, 3, 2, 255};
const TForteInt16 FORTE_SmartIX_test::scm_anEIWithIndexes[] = {0, 5};
const CStringDictionary::TStringId FORTE_SmartIX_test::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_SmartIX_test::scm_anEOWith[] = {0, 255, 0, 255};
const TForteInt16 FORTE_SmartIX_test::scm_anEOWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_SmartIX_test::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_SmartIX_test::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  4, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_SmartIX_test::scm_astInternalFBs[] = {
  {g_nStringIdSUBSCRIBE_1, g_nStringIdSUBSCRIBE_1},
  {g_nStringIdIX, g_nStringIdIX},
  {g_nStringIdMERGE, g_nStringIdMERGE},
  {g_nStringIdMODE, g_nStringIdMODE},
  {g_nStringIdCLIENT_1_0, g_nStringIdCLIENT_1_0},
  {g_nStringIdAPPEND_STRING_3, g_nStringIdAPPEND_STRING_3},
  {g_nStringIdAPPEND_STRING_5, g_nStringIdAPPEND_STRING_3},
  {g_nStringIdSTRING2STRING, g_nStringIdSTRING2STRING},
  {g_nStringIdF_STRING_TO_WSTRING, g_nStringIdF_STRING_TO_WSTRING},
  {g_nStringIdSTRING2STRING_1, g_nStringIdSTRING2STRING},
  {g_nStringIdSTRING2STRING_2, g_nStringIdSTRING2STRING},
  {g_nStringIdSTRING2STRING_3, g_nStringIdSTRING2STRING},
  {g_nStringIdAPPEND_STRING_4, g_nStringIdAPPEND_STRING_3},
  {g_nStringIdSTRING2STRING_4, g_nStringIdSTRING2STRING},
  {g_nStringIdAPPEND_STRING_6, g_nStringIdAPPEND_STRING_3},
  {g_nStringIdSTRING2STRING_5, g_nStringIdSTRING2STRING},
  {g_nStringIdF_STRING_TO_WSTRING_1, g_nStringIdF_STRING_TO_WSTRING}
};

const SCFB_FBParameter FORTE_SmartIX_test::scm_astParamters[] = {
  {0, g_nStringIdQI, "1"},
  {1, g_nStringIdQI, "1"},
  {4, g_nStringIdQI, "1"},
  {7, g_nStringIdIN, "]"},
  {9, g_nStringIdIN, "opc_ua[SUBSCRIBE;opc.tcp://"},
  {10, g_nStringIdIN, "#;/Objects/1:"},
  {11, g_nStringIdIN, "opc_ua[WRITE;opc.tcp://"},
  {13, g_nStringIdIN, "#;/Objects/1:"},
  {15, g_nStringIdIN, "]"},
};

const SCFB_FBConnectionData FORTE_SmartIX_test::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdIND), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMERGE, g_nStringIdREQ_OPC), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdIND), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMERGE, g_nStringIdREQ_PIN), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMERGE, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdCNF_OPCUA), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdINIT), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_5, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_5, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_1, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_1, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_2, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_2, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_3, g_nStringIdCNF), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_4, g_nStringIdREQ), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_4, g_nStringIdCNF), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_4, g_nStringIdREQ), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_4, g_nStringIdCNF), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_5, g_nStringIdREQ), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_5, g_nStringIdCNF), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_6, g_nStringIdREQ), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_6, g_nStringIdCNF), 14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING_1, g_nStringIdREQ), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdCNF_PIN), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_3, g_nStringIdREQ), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING_1, g_nStringIdCNF), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdINIT), 1},
};

const SCFB_FBFannedOutConnectionData FORTE_SmartIX_test::scm_astFannedOutEventConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdREQ), 4},
};

const SCFB_FBConnectionData FORTE_SmartIX_test::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdRD_1), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMERGE, g_nStringIdOPCUA), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdIN), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMERGE, g_nStringIdPIN), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMERGE, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdMODE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdMODE), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIO), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdPIN), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdID), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdOUT1), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdPARAMS), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOPC_Address), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdIN_2), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdOUT), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_5, g_nStringIdIN_1), 6},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOPC_Variable), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_5, g_nStringIdIN_2), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_5, g_nStringIdIN_3), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_5, g_nStringIdOUT), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdIN), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdOUT), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdOPCUA), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_1, g_nStringIdOUT), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdIN_1), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_2, g_nStringIdOUT), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdIN_3), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_3, g_nStringIdOUT), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_4, g_nStringIdIN_1), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_4, g_nStringIdOUT), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_4, g_nStringIdIN_3), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_4, g_nStringIdOUT), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_6, g_nStringIdIN_1), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_5, g_nStringIdOUT), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_6, g_nStringIdIN_3), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_6, g_nStringIdOUT), 14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING_1, g_nStringIdIN), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING_1, g_nStringIdOUT), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdID), 4},
};

const SCFB_FBFannedOutConnectionData FORTE_SmartIX_test::scm_astFannedOutDataConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdSD_1), 4},
  {7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_4, g_nStringIdIN_2), 12},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_6, g_nStringIdIN_2), 14},
};

const SCFB_FBNData FORTE_SmartIX_test::scm_stFBNData = {
  17, scm_astInternalFBs,
  20, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  21, scm_astDataConnections,
  3, scm_astFannedOutDataConnections,
  9, scm_astParamters
};



