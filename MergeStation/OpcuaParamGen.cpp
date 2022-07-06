/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: OpcuaParamGen
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     1.0: 2021-11-11/Tuojian Lyu -  - 
 *************************************************************************/

#include "OpcuaParamGen.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "OpcuaParamGen_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_OpcuaParamGen, g_nStringIdOpcuaParamGen)

const CStringDictionary::TStringId FORTE_OpcuaParamGen::scm_anDataInputNames[] = {g_nStringIdaddress, g_nStringIdvariable, g_nStringIdmethod};

const CStringDictionary::TStringId FORTE_OpcuaParamGen::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_OpcuaParamGen::scm_anDataOutputNames[] = {g_nStringIdout};

const CStringDictionary::TStringId FORTE_OpcuaParamGen::scm_anDataOutputTypeIds[] = {g_nStringIdWSTRING};

const TDataIOID FORTE_OpcuaParamGen::scm_anEIWith[] = {0, 1, 2, 255};
const TForteInt16 FORTE_OpcuaParamGen::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_OpcuaParamGen::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_OpcuaParamGen::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_OpcuaParamGen::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_OpcuaParamGen::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_OpcuaParamGen::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_OpcuaParamGen::scm_astInternalFBs[] = {
  {g_nStringIdSTRING2STRING, g_nStringIdSTRING2STRING},
  {g_nStringIdSTRING2STRING_2, g_nStringIdSTRING2STRING},
  {g_nStringIdAPPEND_STRING_5, g_nStringIdAPPEND_STRING_3},
  {g_nStringIdAPPEND_STRING_3, g_nStringIdAPPEND_STRING_3},
  {g_nStringIdF_STRING_TO_WSTRING, g_nStringIdF_STRING_TO_WSTRING},
  {g_nStringIdAPPEND_STRING_4, g_nStringIdAPPEND_STRING_3},
  {g_nStringIdSTRING2STRING_3, g_nStringIdSTRING2STRING},
  {g_nStringIdSTRING2STRING_4, g_nStringIdSTRING2STRING}
};

const SCFB_FBParameter FORTE_OpcuaParamGen::scm_astParamters[] = {
  {0, g_nStringIdIN, "']'"},
  {1, g_nStringIdIN, "'#;/Objects/1:'"},
  {6, g_nStringIdIN, "'opc_ua['"},
  {7, g_nStringIdIN, "';opc.tcp://'"},
};

const SCFB_FBConnectionData FORTE_OpcuaParamGen::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_5, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_2, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_5, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_3, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_4, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_4, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_4, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_3, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_4, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_2, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_OpcuaParamGen::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_5, g_nStringIdIN_1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_5, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdIN), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_5, g_nStringIdIN_3), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_2, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdIN_3), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_3, g_nStringIdOUT), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_4, g_nStringIdIN_1), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdmethod), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_4, g_nStringIdIN_2), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_4, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_4, g_nStringIdIN_3), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_4, g_nStringIdOUT), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdIN_1), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdaddress), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdIN_2), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdvariable), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_5, g_nStringIdIN_2), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdout), -1},
};

const SCFB_FBNData FORTE_OpcuaParamGen::scm_stFBNData = {
  8, scm_astInternalFBs,
  9, scm_astEventConnections,
  0, nullptr,
  11, scm_astDataConnections,
  0, nullptr,
  4, scm_astParamters
};



