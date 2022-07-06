/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: SmartQX
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     1.0: 2021-11-07/Tuojian Lyu -  - 
 *************************************************************************/

#include "SmartQX.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "SmartQX_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_SmartQX, g_nStringIdSmartQX)

const CStringDictionary::TStringId FORTE_SmartQX::scm_anDataInputNames[] = {g_nStringIdMODE, g_nStringIdOPC_Variable, g_nStringIdOPC_Address, g_nStringIdIO, g_nStringIdOUT};

const CStringDictionary::TStringId FORTE_SmartQX::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdSTRING, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_SmartQX::scm_anDataOutputNames[] = {g_nStringIdQO};

const CStringDictionary::TStringId FORTE_SmartQX::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TDataIOID FORTE_SmartQX::scm_anEIWith[] = {0, 1, 3, 2, 4, 255, 0, 1, 3, 2, 4, 255};
const TForteInt16 FORTE_SmartQX::scm_anEIWithIndexes[] = {0, 6};
const CStringDictionary::TStringId FORTE_SmartQX::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_SmartQX::scm_anEOWith[] = {0, 255, 0, 255};
const TForteInt16 FORTE_SmartQX::scm_anEOWithIndexes[] = {0, 2};
const CStringDictionary::TStringId FORTE_SmartQX::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_SmartQX::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  5, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_SmartQX::scm_astInternalFBs[] = {
  {g_nStringIdCLIENT_1_1, g_nStringIdCLIENT_1_0},
  {g_nStringIdBOOL2BOOL, g_nStringIdBOOL2BOOL},
  {g_nStringIdMODE, g_nStringIdMODE},
  {g_nStringIdQX, g_nStringIdQX},
  {g_nStringIdOpcuaParamGen, g_nStringIdOpcuaParamGen},
  {g_nStringIdMODE_1, g_nStringIdMODE}
};

const SCFB_FBParameter FORTE_SmartQX::scm_astParamters[] = {
  {0, g_nStringIdQI, "1"},
  {3, g_nStringIdQI, "1"},
  {4, g_nStringIdmethod, "\"WRITE\""},
};

const SCFB_FBConnectionData FORTE_SmartQX::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdCNF_OPCUA), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_1, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdCNF_PIN), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_1, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_1, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOpcuaParamGen, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOpcuaParamGen, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE_1, g_nStringIdCNF_OPCUA), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_1, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE_1, g_nStringIdCNF_PIN), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX, g_nStringIdINIT), 3},
};

const SCFB_FBFannedOutConnectionData FORTE_SmartQX::scm_astFannedOutEventConnections[] = {
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_1, g_nStringIdREQ), 0},
  {7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE_1, g_nStringIdREQ), 5},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_1, g_nStringIdINIT), 0},
};

const SCFB_FBConnectionData FORTE_SmartQX::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_1, g_nStringIdSD_1), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOUT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdMODE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdMODE), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_1, g_nStringIdQO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOPC_Variable), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOpcuaParamGen, g_nStringIdvariable), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOPC_Address), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOpcuaParamGen, g_nStringIdaddress), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE_1, g_nStringIdOUT), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_1, g_nStringIdID), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE_1, g_nStringIdOUT1), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX, g_nStringIdPARAMS), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOpcuaParamGen, g_nStringIdout), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE_1, g_nStringIdOPCUA), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIO), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE_1, g_nStringIdPIN), 5},
};

const SCFB_FBFannedOutConnectionData FORTE_SmartQX::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQX, g_nStringIdOUT), 3},
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE_1, g_nStringIdMODE), 5},
};

const SCFB_FBNData FORTE_SmartQX::scm_stFBNData = {
  6, scm_astInternalFBs,
  10, scm_astEventConnections,
  3, scm_astFannedOutEventConnections,
  10, scm_astDataConnections,
  2, scm_astFannedOutDataConnections,
  3, scm_astParamters
};



