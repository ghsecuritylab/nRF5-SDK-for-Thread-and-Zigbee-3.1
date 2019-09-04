/*lint -e???? -save */
/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_nrf_802154_core_hooks.h"

typedef struct _CMOCK_nrf_802154_core_hooks_terminate_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;
  int CallOrder;
  nrf_802154_term_t Expected_term_lvl;
  req_originator_t Expected_req_orig;
  int IgnoreArg_term_lvl;
  int IgnoreArg_req_orig;

} CMOCK_nrf_802154_core_hooks_terminate_CALL_INSTANCE;

typedef struct _CMOCK_nrf_802154_core_hooks_transmitted_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  uint8_t* Expected_p_frame;
  int Expected_p_frame_Depth;
  int IgnoreArg_p_frame;

} CMOCK_nrf_802154_core_hooks_transmitted_CALL_INSTANCE;

typedef struct _CMOCK_nrf_802154_core_hooks_tx_failed_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;
  int CallOrder;
  uint8_t* Expected_p_frame;
  nrf_802154_tx_error_t Expected_error;
  int Expected_p_frame_Depth;
  int IgnoreArg_p_frame;
  int IgnoreArg_error;

} CMOCK_nrf_802154_core_hooks_tx_failed_CALL_INSTANCE;

typedef struct _CMOCK_nrf_802154_core_hooks_tx_started_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;
  int CallOrder;
  uint8_t* Expected_p_frame;
  int Expected_p_frame_Depth;
  int IgnoreArg_p_frame;

} CMOCK_nrf_802154_core_hooks_tx_started_CALL_INSTANCE;

typedef struct _CMOCK_nrf_802154_core_hooks_rx_started_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_nrf_802154_core_hooks_rx_started_CALL_INSTANCE;

typedef struct _CMOCK_nrf_802154_core_hooks_rx_ack_started_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_nrf_802154_core_hooks_rx_ack_started_CALL_INSTANCE;

static struct mock_nrf_802154_core_hooksInstance
{
  int nrf_802154_core_hooks_terminate_IgnoreBool;
  bool nrf_802154_core_hooks_terminate_FinalReturn;
  CMOCK_nrf_802154_core_hooks_terminate_CALLBACK nrf_802154_core_hooks_terminate_CallbackFunctionPointer;
  int nrf_802154_core_hooks_terminate_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE nrf_802154_core_hooks_terminate_CallInstance;
  int nrf_802154_core_hooks_transmitted_IgnoreBool;
  CMOCK_nrf_802154_core_hooks_transmitted_CALLBACK nrf_802154_core_hooks_transmitted_CallbackFunctionPointer;
  int nrf_802154_core_hooks_transmitted_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE nrf_802154_core_hooks_transmitted_CallInstance;
  int nrf_802154_core_hooks_tx_failed_IgnoreBool;
  bool nrf_802154_core_hooks_tx_failed_FinalReturn;
  CMOCK_nrf_802154_core_hooks_tx_failed_CALLBACK nrf_802154_core_hooks_tx_failed_CallbackFunctionPointer;
  int nrf_802154_core_hooks_tx_failed_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE nrf_802154_core_hooks_tx_failed_CallInstance;
  int nrf_802154_core_hooks_tx_started_IgnoreBool;
  bool nrf_802154_core_hooks_tx_started_FinalReturn;
  CMOCK_nrf_802154_core_hooks_tx_started_CALLBACK nrf_802154_core_hooks_tx_started_CallbackFunctionPointer;
  int nrf_802154_core_hooks_tx_started_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE nrf_802154_core_hooks_tx_started_CallInstance;
  int nrf_802154_core_hooks_rx_started_IgnoreBool;
  CMOCK_nrf_802154_core_hooks_rx_started_CALLBACK nrf_802154_core_hooks_rx_started_CallbackFunctionPointer;
  int nrf_802154_core_hooks_rx_started_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE nrf_802154_core_hooks_rx_started_CallInstance;
  int nrf_802154_core_hooks_rx_ack_started_IgnoreBool;
  CMOCK_nrf_802154_core_hooks_rx_ack_started_CALLBACK nrf_802154_core_hooks_rx_ack_started_CallbackFunctionPointer;
  int nrf_802154_core_hooks_rx_ack_started_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE nrf_802154_core_hooks_rx_ack_started_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_nrf_802154_core_hooks_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.nrf_802154_core_hooks_terminate_CallInstance, cmock_line, "Function 'nrf_802154_core_hooks_terminate' called less times than expected.");
  if (Mock.nrf_802154_core_hooks_terminate_CallbackFunctionPointer != NULL)
    Mock.nrf_802154_core_hooks_terminate_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.nrf_802154_core_hooks_transmitted_CallInstance, cmock_line, "Function 'nrf_802154_core_hooks_transmitted' called less times than expected.");
  if (Mock.nrf_802154_core_hooks_transmitted_CallbackFunctionPointer != NULL)
    Mock.nrf_802154_core_hooks_transmitted_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.nrf_802154_core_hooks_tx_failed_CallInstance, cmock_line, "Function 'nrf_802154_core_hooks_tx_failed' called less times than expected.");
  if (Mock.nrf_802154_core_hooks_tx_failed_CallbackFunctionPointer != NULL)
    Mock.nrf_802154_core_hooks_tx_failed_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.nrf_802154_core_hooks_tx_started_CallInstance, cmock_line, "Function 'nrf_802154_core_hooks_tx_started' called less times than expected.");
  if (Mock.nrf_802154_core_hooks_tx_started_CallbackFunctionPointer != NULL)
    Mock.nrf_802154_core_hooks_tx_started_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.nrf_802154_core_hooks_rx_started_CallInstance, cmock_line, "Function 'nrf_802154_core_hooks_rx_started' called less times than expected.");
  if (Mock.nrf_802154_core_hooks_rx_started_CallbackFunctionPointer != NULL)
    Mock.nrf_802154_core_hooks_rx_started_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.nrf_802154_core_hooks_rx_ack_started_CallInstance, cmock_line, "Function 'nrf_802154_core_hooks_rx_ack_started' called less times than expected.");
  if (Mock.nrf_802154_core_hooks_rx_ack_started_CallbackFunctionPointer != NULL)
    Mock.nrf_802154_core_hooks_rx_ack_started_CallInstance = CMOCK_GUTS_NONE;
}

void mock_nrf_802154_core_hooks_Init(void)
{
  mock_nrf_802154_core_hooks_Destroy();
}

void mock_nrf_802154_core_hooks_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.nrf_802154_core_hooks_terminate_CallbackFunctionPointer = NULL;
  Mock.nrf_802154_core_hooks_terminate_CallbackCalls = 0;
  Mock.nrf_802154_core_hooks_transmitted_CallbackFunctionPointer = NULL;
  Mock.nrf_802154_core_hooks_transmitted_CallbackCalls = 0;
  Mock.nrf_802154_core_hooks_tx_failed_CallbackFunctionPointer = NULL;
  Mock.nrf_802154_core_hooks_tx_failed_CallbackCalls = 0;
  Mock.nrf_802154_core_hooks_tx_started_CallbackFunctionPointer = NULL;
  Mock.nrf_802154_core_hooks_tx_started_CallbackCalls = 0;
  Mock.nrf_802154_core_hooks_rx_started_CallbackFunctionPointer = NULL;
  Mock.nrf_802154_core_hooks_rx_started_CallbackCalls = 0;
  Mock.nrf_802154_core_hooks_rx_ack_started_CallbackFunctionPointer = NULL;
  Mock.nrf_802154_core_hooks_rx_ack_started_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

bool nrf_802154_core_hooks_terminate(nrf_802154_term_t term_lvl, req_originator_t req_orig)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_nrf_802154_core_hooks_terminate_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_core_hooks_terminate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.nrf_802154_core_hooks_terminate_CallInstance);
  Mock.nrf_802154_core_hooks_terminate_CallInstance = CMock_Guts_MemNext(Mock.nrf_802154_core_hooks_terminate_CallInstance);
  if (Mock.nrf_802154_core_hooks_terminate_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return Mock.nrf_802154_core_hooks_terminate_FinalReturn;
    Mock.nrf_802154_core_hooks_terminate_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.nrf_802154_core_hooks_terminate_CallbackFunctionPointer != NULL)
  {
    return Mock.nrf_802154_core_hooks_terminate_CallbackFunctionPointer(term_lvl, req_orig, Mock.nrf_802154_core_hooks_terminate_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'nrf_802154_core_hooks_terminate' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_core_hooks_terminate' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_core_hooks_terminate' called later than expected.");
  if (!cmock_call_instance->IgnoreArg_term_lvl)
  {
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_term_lvl), (void*)(&term_lvl), sizeof(nrf_802154_term_t), cmock_line, "Function 'nrf_802154_core_hooks_terminate' called with unexpected value for argument 'term_lvl'.");
  }
  if (!cmock_call_instance->IgnoreArg_req_orig)
  {
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_req_orig), (void*)(&req_orig), sizeof(req_originator_t), cmock_line, "Function 'nrf_802154_core_hooks_terminate' called with unexpected value for argument 'req_orig'.");
  }
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_nrf_802154_core_hooks_terminate(CMOCK_nrf_802154_core_hooks_terminate_CALL_INSTANCE* cmock_call_instance, nrf_802154_term_t term_lvl, req_originator_t req_orig)
{
  memcpy(&cmock_call_instance->Expected_term_lvl, &term_lvl, sizeof(nrf_802154_term_t));
  cmock_call_instance->IgnoreArg_term_lvl = 0;
  memcpy(&cmock_call_instance->Expected_req_orig, &req_orig, sizeof(req_originator_t));
  cmock_call_instance->IgnoreArg_req_orig = 0;
}

void nrf_802154_core_hooks_terminate_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_core_hooks_terminate_CALL_INSTANCE));
  CMOCK_nrf_802154_core_hooks_terminate_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_core_hooks_terminate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_core_hooks_terminate_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_core_hooks_terminate_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.nrf_802154_core_hooks_terminate_IgnoreBool = (int)1;
}

void nrf_802154_core_hooks_terminate_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, nrf_802154_term_t term_lvl, req_originator_t req_orig, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_core_hooks_terminate_CALL_INSTANCE));
  CMOCK_nrf_802154_core_hooks_terminate_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_core_hooks_terminate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_core_hooks_terminate_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_core_hooks_terminate_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_nrf_802154_core_hooks_terminate(cmock_call_instance, term_lvl, req_orig);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void nrf_802154_core_hooks_terminate_StubWithCallback(CMOCK_nrf_802154_core_hooks_terminate_CALLBACK Callback)
{
  Mock.nrf_802154_core_hooks_terminate_CallbackFunctionPointer = Callback;
}

void nrf_802154_core_hooks_terminate_CMockIgnoreArg_term_lvl(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_nrf_802154_core_hooks_terminate_CALL_INSTANCE* cmock_call_instance = cmock_call_instance = (CMOCK_nrf_802154_core_hooks_terminate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.nrf_802154_core_hooks_terminate_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "term_lvl IgnoreArg called before Expect on 'nrf_802154_core_hooks_terminate'.");
  cmock_call_instance->IgnoreArg_term_lvl = 1;
}

void nrf_802154_core_hooks_terminate_CMockIgnoreArg_req_orig(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_nrf_802154_core_hooks_terminate_CALL_INSTANCE* cmock_call_instance = cmock_call_instance = (CMOCK_nrf_802154_core_hooks_terminate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.nrf_802154_core_hooks_terminate_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "req_orig IgnoreArg called before Expect on 'nrf_802154_core_hooks_terminate'.");
  cmock_call_instance->IgnoreArg_req_orig = 1;
}

void nrf_802154_core_hooks_transmitted(const uint8_t* p_frame)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_nrf_802154_core_hooks_transmitted_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_core_hooks_transmitted_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.nrf_802154_core_hooks_transmitted_CallInstance);
  Mock.nrf_802154_core_hooks_transmitted_CallInstance = CMock_Guts_MemNext(Mock.nrf_802154_core_hooks_transmitted_CallInstance);
  if (Mock.nrf_802154_core_hooks_transmitted_IgnoreBool)
  {
    return;
  }
  if (Mock.nrf_802154_core_hooks_transmitted_CallbackFunctionPointer != NULL)
  {
    Mock.nrf_802154_core_hooks_transmitted_CallbackFunctionPointer(p_frame, Mock.nrf_802154_core_hooks_transmitted_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'nrf_802154_core_hooks_transmitted' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_core_hooks_transmitted' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_core_hooks_transmitted' called later than expected.");
  if (!cmock_call_instance->IgnoreArg_p_frame)
  {
    if (cmock_call_instance->Expected_p_frame == NULL)
      { UNITY_TEST_ASSERT_NULL(p_frame, cmock_line, "Expected NULL. Function 'nrf_802154_core_hooks_transmitted' called with unexpected value for argument 'p_frame'."); }
    else if (cmock_call_instance->Expected_p_frame_Depth == 0)
      { UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_p_frame, p_frame, cmock_line, "Function 'nrf_802154_core_hooks_transmitted' called with unexpected value for argument 'p_frame'."); }
    else
      { UNITY_TEST_ASSERT_EQUAL_HEX8_ARRAY(cmock_call_instance->Expected_p_frame, p_frame, cmock_call_instance->Expected_p_frame_Depth, cmock_line, "Function 'nrf_802154_core_hooks_transmitted' called with unexpected value for argument 'p_frame'."); }
  }
}

void CMockExpectParameters_nrf_802154_core_hooks_transmitted(CMOCK_nrf_802154_core_hooks_transmitted_CALL_INSTANCE* cmock_call_instance, const uint8_t* p_frame, int p_frame_Depth)
{
  cmock_call_instance->Expected_p_frame = (uint8_t*)p_frame;
  cmock_call_instance->Expected_p_frame_Depth = p_frame_Depth;
  cmock_call_instance->IgnoreArg_p_frame = 0;
}

void nrf_802154_core_hooks_transmitted_CMockIgnore(void)
{
  Mock.nrf_802154_core_hooks_transmitted_IgnoreBool = (int)1;
}

void nrf_802154_core_hooks_transmitted_CMockExpect(UNITY_LINE_TYPE cmock_line, const uint8_t* p_frame)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_core_hooks_transmitted_CALL_INSTANCE));
  CMOCK_nrf_802154_core_hooks_transmitted_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_core_hooks_transmitted_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_core_hooks_transmitted_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_core_hooks_transmitted_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_nrf_802154_core_hooks_transmitted(cmock_call_instance, p_frame, 0);
}

void nrf_802154_core_hooks_transmitted_StubWithCallback(CMOCK_nrf_802154_core_hooks_transmitted_CALLBACK Callback)
{
  Mock.nrf_802154_core_hooks_transmitted_CallbackFunctionPointer = Callback;
}

void nrf_802154_core_hooks_transmitted_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, uint8_t* p_frame, int p_frame_Depth)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_core_hooks_transmitted_CALL_INSTANCE));
  CMOCK_nrf_802154_core_hooks_transmitted_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_core_hooks_transmitted_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_core_hooks_transmitted_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_core_hooks_transmitted_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_nrf_802154_core_hooks_transmitted(cmock_call_instance, p_frame, p_frame_Depth);
}

void nrf_802154_core_hooks_transmitted_CMockIgnoreArg_p_frame(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_nrf_802154_core_hooks_transmitted_CALL_INSTANCE* cmock_call_instance = cmock_call_instance = (CMOCK_nrf_802154_core_hooks_transmitted_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.nrf_802154_core_hooks_transmitted_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "p_frame IgnoreArg called before Expect on 'nrf_802154_core_hooks_transmitted'.");
  cmock_call_instance->IgnoreArg_p_frame = 1;
}

bool nrf_802154_core_hooks_tx_failed(const uint8_t* p_frame, nrf_802154_tx_error_t error)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_nrf_802154_core_hooks_tx_failed_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_core_hooks_tx_failed_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.nrf_802154_core_hooks_tx_failed_CallInstance);
  Mock.nrf_802154_core_hooks_tx_failed_CallInstance = CMock_Guts_MemNext(Mock.nrf_802154_core_hooks_tx_failed_CallInstance);
  if (Mock.nrf_802154_core_hooks_tx_failed_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return Mock.nrf_802154_core_hooks_tx_failed_FinalReturn;
    Mock.nrf_802154_core_hooks_tx_failed_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.nrf_802154_core_hooks_tx_failed_CallbackFunctionPointer != NULL)
  {
    return Mock.nrf_802154_core_hooks_tx_failed_CallbackFunctionPointer(p_frame, error, Mock.nrf_802154_core_hooks_tx_failed_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'nrf_802154_core_hooks_tx_failed' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_core_hooks_tx_failed' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_core_hooks_tx_failed' called later than expected.");
  if (!cmock_call_instance->IgnoreArg_p_frame)
  {
    if (cmock_call_instance->Expected_p_frame == NULL)
      { UNITY_TEST_ASSERT_NULL(p_frame, cmock_line, "Expected NULL. Function 'nrf_802154_core_hooks_tx_failed' called with unexpected value for argument 'p_frame'."); }
    else if (cmock_call_instance->Expected_p_frame_Depth == 0)
      { UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_p_frame, p_frame, cmock_line, "Function 'nrf_802154_core_hooks_tx_failed' called with unexpected value for argument 'p_frame'."); }
    else
      { UNITY_TEST_ASSERT_EQUAL_HEX8_ARRAY(cmock_call_instance->Expected_p_frame, p_frame, cmock_call_instance->Expected_p_frame_Depth, cmock_line, "Function 'nrf_802154_core_hooks_tx_failed' called with unexpected value for argument 'p_frame'."); }
  }
  if (!cmock_call_instance->IgnoreArg_error)
  {
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_error), (void*)(&error), sizeof(nrf_802154_tx_error_t), cmock_line, "Function 'nrf_802154_core_hooks_tx_failed' called with unexpected value for argument 'error'.");
  }
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_nrf_802154_core_hooks_tx_failed(CMOCK_nrf_802154_core_hooks_tx_failed_CALL_INSTANCE* cmock_call_instance, const uint8_t* p_frame, int p_frame_Depth, nrf_802154_tx_error_t error)
{
  cmock_call_instance->Expected_p_frame = (uint8_t*)p_frame;
  cmock_call_instance->Expected_p_frame_Depth = p_frame_Depth;
  cmock_call_instance->IgnoreArg_p_frame = 0;
  memcpy(&cmock_call_instance->Expected_error, &error, sizeof(nrf_802154_tx_error_t));
  cmock_call_instance->IgnoreArg_error = 0;
}

void nrf_802154_core_hooks_tx_failed_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_core_hooks_tx_failed_CALL_INSTANCE));
  CMOCK_nrf_802154_core_hooks_tx_failed_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_core_hooks_tx_failed_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_core_hooks_tx_failed_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_core_hooks_tx_failed_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.nrf_802154_core_hooks_tx_failed_IgnoreBool = (int)1;
}

void nrf_802154_core_hooks_tx_failed_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const uint8_t* p_frame, nrf_802154_tx_error_t error, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_core_hooks_tx_failed_CALL_INSTANCE));
  CMOCK_nrf_802154_core_hooks_tx_failed_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_core_hooks_tx_failed_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_core_hooks_tx_failed_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_core_hooks_tx_failed_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_nrf_802154_core_hooks_tx_failed(cmock_call_instance, p_frame, 0, error);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void nrf_802154_core_hooks_tx_failed_StubWithCallback(CMOCK_nrf_802154_core_hooks_tx_failed_CALLBACK Callback)
{
  Mock.nrf_802154_core_hooks_tx_failed_CallbackFunctionPointer = Callback;
}

void nrf_802154_core_hooks_tx_failed_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t* p_frame, int p_frame_Depth, nrf_802154_tx_error_t error, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_core_hooks_tx_failed_CALL_INSTANCE));
  CMOCK_nrf_802154_core_hooks_tx_failed_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_core_hooks_tx_failed_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_core_hooks_tx_failed_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_core_hooks_tx_failed_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_nrf_802154_core_hooks_tx_failed(cmock_call_instance, p_frame, p_frame_Depth, error);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void nrf_802154_core_hooks_tx_failed_CMockIgnoreArg_p_frame(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_nrf_802154_core_hooks_tx_failed_CALL_INSTANCE* cmock_call_instance = cmock_call_instance = (CMOCK_nrf_802154_core_hooks_tx_failed_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.nrf_802154_core_hooks_tx_failed_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "p_frame IgnoreArg called before Expect on 'nrf_802154_core_hooks_tx_failed'.");
  cmock_call_instance->IgnoreArg_p_frame = 1;
}

void nrf_802154_core_hooks_tx_failed_CMockIgnoreArg_error(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_nrf_802154_core_hooks_tx_failed_CALL_INSTANCE* cmock_call_instance = cmock_call_instance = (CMOCK_nrf_802154_core_hooks_tx_failed_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.nrf_802154_core_hooks_tx_failed_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "error IgnoreArg called before Expect on 'nrf_802154_core_hooks_tx_failed'.");
  cmock_call_instance->IgnoreArg_error = 1;
}

bool nrf_802154_core_hooks_tx_started(const uint8_t* p_frame)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_nrf_802154_core_hooks_tx_started_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_core_hooks_tx_started_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.nrf_802154_core_hooks_tx_started_CallInstance);
  Mock.nrf_802154_core_hooks_tx_started_CallInstance = CMock_Guts_MemNext(Mock.nrf_802154_core_hooks_tx_started_CallInstance);
  if (Mock.nrf_802154_core_hooks_tx_started_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return Mock.nrf_802154_core_hooks_tx_started_FinalReturn;
    Mock.nrf_802154_core_hooks_tx_started_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.nrf_802154_core_hooks_tx_started_CallbackFunctionPointer != NULL)
  {
    return Mock.nrf_802154_core_hooks_tx_started_CallbackFunctionPointer(p_frame, Mock.nrf_802154_core_hooks_tx_started_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'nrf_802154_core_hooks_tx_started' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_core_hooks_tx_started' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_core_hooks_tx_started' called later than expected.");
  if (!cmock_call_instance->IgnoreArg_p_frame)
  {
    if (cmock_call_instance->Expected_p_frame == NULL)
      { UNITY_TEST_ASSERT_NULL(p_frame, cmock_line, "Expected NULL. Function 'nrf_802154_core_hooks_tx_started' called with unexpected value for argument 'p_frame'."); }
    else if (cmock_call_instance->Expected_p_frame_Depth == 0)
      { UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_p_frame, p_frame, cmock_line, "Function 'nrf_802154_core_hooks_tx_started' called with unexpected value for argument 'p_frame'."); }
    else
      { UNITY_TEST_ASSERT_EQUAL_HEX8_ARRAY(cmock_call_instance->Expected_p_frame, p_frame, cmock_call_instance->Expected_p_frame_Depth, cmock_line, "Function 'nrf_802154_core_hooks_tx_started' called with unexpected value for argument 'p_frame'."); }
  }
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_nrf_802154_core_hooks_tx_started(CMOCK_nrf_802154_core_hooks_tx_started_CALL_INSTANCE* cmock_call_instance, const uint8_t* p_frame, int p_frame_Depth)
{
  cmock_call_instance->Expected_p_frame = (uint8_t*)p_frame;
  cmock_call_instance->Expected_p_frame_Depth = p_frame_Depth;
  cmock_call_instance->IgnoreArg_p_frame = 0;
}

void nrf_802154_core_hooks_tx_started_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_core_hooks_tx_started_CALL_INSTANCE));
  CMOCK_nrf_802154_core_hooks_tx_started_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_core_hooks_tx_started_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_core_hooks_tx_started_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_core_hooks_tx_started_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.nrf_802154_core_hooks_tx_started_IgnoreBool = (int)1;
}

void nrf_802154_core_hooks_tx_started_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const uint8_t* p_frame, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_core_hooks_tx_started_CALL_INSTANCE));
  CMOCK_nrf_802154_core_hooks_tx_started_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_core_hooks_tx_started_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_core_hooks_tx_started_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_core_hooks_tx_started_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_nrf_802154_core_hooks_tx_started(cmock_call_instance, p_frame, 0);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void nrf_802154_core_hooks_tx_started_StubWithCallback(CMOCK_nrf_802154_core_hooks_tx_started_CALLBACK Callback)
{
  Mock.nrf_802154_core_hooks_tx_started_CallbackFunctionPointer = Callback;
}

void nrf_802154_core_hooks_tx_started_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t* p_frame, int p_frame_Depth, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_core_hooks_tx_started_CALL_INSTANCE));
  CMOCK_nrf_802154_core_hooks_tx_started_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_core_hooks_tx_started_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_core_hooks_tx_started_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_core_hooks_tx_started_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_nrf_802154_core_hooks_tx_started(cmock_call_instance, p_frame, p_frame_Depth);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void nrf_802154_core_hooks_tx_started_CMockIgnoreArg_p_frame(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_nrf_802154_core_hooks_tx_started_CALL_INSTANCE* cmock_call_instance = cmock_call_instance = (CMOCK_nrf_802154_core_hooks_tx_started_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.nrf_802154_core_hooks_tx_started_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "p_frame IgnoreArg called before Expect on 'nrf_802154_core_hooks_tx_started'.");
  cmock_call_instance->IgnoreArg_p_frame = 1;
}

void nrf_802154_core_hooks_rx_started(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_nrf_802154_core_hooks_rx_started_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_core_hooks_rx_started_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.nrf_802154_core_hooks_rx_started_CallInstance);
  Mock.nrf_802154_core_hooks_rx_started_CallInstance = CMock_Guts_MemNext(Mock.nrf_802154_core_hooks_rx_started_CallInstance);
  if (Mock.nrf_802154_core_hooks_rx_started_IgnoreBool)
  {
    return;
  }
  if (Mock.nrf_802154_core_hooks_rx_started_CallbackFunctionPointer != NULL)
  {
    Mock.nrf_802154_core_hooks_rx_started_CallbackFunctionPointer(Mock.nrf_802154_core_hooks_rx_started_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'nrf_802154_core_hooks_rx_started' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_core_hooks_rx_started' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_core_hooks_rx_started' called later than expected.");
}

void nrf_802154_core_hooks_rx_started_CMockIgnore(void)
{
  Mock.nrf_802154_core_hooks_rx_started_IgnoreBool = (int)1;
}

void nrf_802154_core_hooks_rx_started_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_core_hooks_rx_started_CALL_INSTANCE));
  CMOCK_nrf_802154_core_hooks_rx_started_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_core_hooks_rx_started_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_core_hooks_rx_started_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_core_hooks_rx_started_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
}

void nrf_802154_core_hooks_rx_started_StubWithCallback(CMOCK_nrf_802154_core_hooks_rx_started_CALLBACK Callback)
{
  Mock.nrf_802154_core_hooks_rx_started_CallbackFunctionPointer = Callback;
}

void nrf_802154_core_hooks_rx_ack_started(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_nrf_802154_core_hooks_rx_ack_started_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_core_hooks_rx_ack_started_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.nrf_802154_core_hooks_rx_ack_started_CallInstance);
  Mock.nrf_802154_core_hooks_rx_ack_started_CallInstance = CMock_Guts_MemNext(Mock.nrf_802154_core_hooks_rx_ack_started_CallInstance);
  if (Mock.nrf_802154_core_hooks_rx_ack_started_IgnoreBool)
  {
    return;
  }
  if (Mock.nrf_802154_core_hooks_rx_ack_started_CallbackFunctionPointer != NULL)
  {
    Mock.nrf_802154_core_hooks_rx_ack_started_CallbackFunctionPointer(Mock.nrf_802154_core_hooks_rx_ack_started_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'nrf_802154_core_hooks_rx_ack_started' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_core_hooks_rx_ack_started' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_core_hooks_rx_ack_started' called later than expected.");
}

void nrf_802154_core_hooks_rx_ack_started_CMockIgnore(void)
{
  Mock.nrf_802154_core_hooks_rx_ack_started_IgnoreBool = (int)1;
}

void nrf_802154_core_hooks_rx_ack_started_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_core_hooks_rx_ack_started_CALL_INSTANCE));
  CMOCK_nrf_802154_core_hooks_rx_ack_started_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_core_hooks_rx_ack_started_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_core_hooks_rx_ack_started_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_core_hooks_rx_ack_started_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
}

void nrf_802154_core_hooks_rx_ack_started_StubWithCallback(CMOCK_nrf_802154_core_hooks_rx_ack_started_CALLBACK Callback)
{
  Mock.nrf_802154_core_hooks_rx_ack_started_CallbackFunctionPointer = Callback;
}

/* lint -restore */
