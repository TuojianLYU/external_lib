/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: SmartIX
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     1.0: 2021-11-07/Tuojian Lyu -  - 
 *************************************************************************/

#include "SmartIX.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "SmartIX_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_SmartIX, g_nStringIdSmartIX)

const CStringDictionary::TStringId FORTE_SmartIX::scm_anDataInputNames[] = {g_nStringIdMODE, g_nStringIdOPCUA, g_nStringIdIO};

const CStringDictionary::TStringId FORTE_SmartIX::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdSTRING};

const CStringDictionary::TStringId FORTE_SmartIX::scm_anDataOutputNames[] = {g_nStringIdQO};

const CStringDictionary::TStringId FORTE_SmartIX::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_SmartIX::scm_anEIWith[] = {0, 1, 2, 255, 0, 1, 2, 255};
const TForteInt16 FORTE_SmartIX::scm_anEIWithIndexes[] = {0, 4};
const CStringDictionary::TStringId FORTE_SmartIX::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_SmartIX::scm_anEOWith[] = {0, 255, 0, 255};
const TForteInt16 FORTE_SmartIX::scm_anEOWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_SmartIX::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_SmartIX::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_SmartIX::scm_astInternalFBs[] = {
  {g_nStringIdSUBSCRIBE_1, g_nStringIdSUBSCRIBE_1},
  {g_nStringIdIX, g_nStringIdIX},
  {g_nStringIdMERGE, g_nStringIdMERGE},
  {g_nStringIdMODE, g_nStringIdMODE},
  {g_nStringIdCLIENT_1_0, g_nStringIdCLIENT_1_0}
};

const SCFB_FBParameter FORTE_SmartIX::scm_astParamters[] = {
  {0, g_nStringIdQI, "1"},
  {1, g_nStringIdQI, "1"},
  {4, g_nStringIdQI, "1"},
  {4, g_nStringIdID, "opc_ua[WRITE;opc.tcp://localhost:4840#;/Objects/1:sensor1]"},
};

const SCFB_FBConnectionData FORTE_SmartIX::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdIND), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMERGE, g_nStringIdREQ_OPC), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdIND), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMERGE, g_nStringIdREQ_PIN), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMERGE, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdCNF_OPCUA), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdCNF_PIN), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdINIT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdINIT), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_SmartIX::scm_astFannedOutEventConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdREQ), 4},
};

const SCFB_FBConnectionData FORTE_SmartIX::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdRD_1), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMERGE, g_nStringIdOPCUA), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdIN), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMERGE, g_nStringIdPIN), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMERGE, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdMODE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdMODE), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOPCUA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdOPCUA), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIO), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdPIN), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdID), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdOUT1), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIX, g_nStringIdPARAMS), 1},
};

const SCFB_FBFannedOutConnectionData FORTE_SmartIX::scm_astFannedOutDataConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdSD_1), 4},
};

const SCFB_FBNData FORTE_SmartIX::scm_stFBNData = {
  5, scm_astInternalFBs,
  8, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  8, scm_astDataConnections,
  1, scm_astFannedOutDataConnections,
  4, scm_astParamters
};



