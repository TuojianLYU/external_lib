/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: CompositeOpcIO
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     1.0: 2021-11-05/Tuojian Lyu -  - 
 *************************************************************************/

#include "CompositeOpcIO.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "CompositeOpcIO_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_CompositeOpcIO, g_nStringIdCompositeOpcIO)

const CStringDictionary::TStringId FORTE_CompositeOpcIO::scm_anDataInputNames[] = {g_nStringIdMODE, g_nStringIdOPCUA, g_nStringIdPIN};

const CStringDictionary::TStringId FORTE_CompositeOpcIO::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_CompositeOpcIO::scm_anDataOutputNames[] = {g_nStringIdOUT, g_nStringIdSTATUS};

const CStringDictionary::TStringId FORTE_CompositeOpcIO::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING};

const TDataIOID FORTE_CompositeOpcIO::scm_anEIWith[] = {0, 1, 2, 255};
const TForteInt16 FORTE_CompositeOpcIO::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_CompositeOpcIO::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_CompositeOpcIO::scm_anEOWith[] = {0, 1, 255};
const TForteInt16 FORTE_CompositeOpcIO::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_CompositeOpcIO::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_CompositeOpcIO::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_CompositeOpcIO::scm_astInternalFBs[] = {
  {g_nStringIdMERGE, g_nStringIdMERGE},
  {g_nStringIdIX, g_nStringIdIX},
  {g_nStringIdMODE, g_nStringIdMODE},
  {g_nStringIdSUBSCRIBE_1, g_nStringIdSUBSCRIBE_1},
  {g_nStringIdE_DELAY, g_nStringIdE_DELAY}
};

const SCFB_FBParameter FORTE_CompositeOpcIO::scm_astParamters[] = {
  {3, g_nStringIdQI, "1"},
  {4, g_nStringIdDT, "T#2s"},
};

const SCFB_FBConnectionData FORTE_CompositeOpcIO::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINITO), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdCNF_OPCUA), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_DELAY, g_nStringIdSTART), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_DELAY, g_nStringIdEO), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINIT), 3},
};

const SCFB_FBFannedOutConnectionData FORTE_CompositeOpcIO::scm_astFannedOutEventConnections[] = {
};

const SCFB_FBConnectionData FORTE_CompositeOpcIO::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdMODE), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdMODE), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOPCUA), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdOPCUA), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPIN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdPIN), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdSTATUS), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdRD_1), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOUT), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdMODE, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdID), 3},
};

const SCFB_FBFannedOutConnectionData FORTE_CompositeOpcIO::scm_astFannedOutDataConnections[] = {
};

const SCFB_FBNData FORTE_CompositeOpcIO::scm_stFBNData = {
  5, scm_astInternalFBs,
  4, scm_astEventConnections,
  0, nullptr,
  6, scm_astDataConnections,
  0, nullptr,
  2, scm_astParamters
};



