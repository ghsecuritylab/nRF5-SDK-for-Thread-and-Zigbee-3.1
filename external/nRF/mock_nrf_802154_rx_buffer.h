/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_NRF_802154_RX_BUFFER_H
#define _MOCK_NRF_802154_RX_BUFFER_H

#ifndef __STATIC_INLINE
#define __STATIC_INLINE
#else
#undef __STATIC_INLINE
#define __STATIC_INLINE
#endif
#define SUPPRESS_INLINE_IMPLEMENTATION

#include <nrf_802154_rx_buffer.h>
#undef SUPPRESS_INLINE_IMPLEMENTATION
#undef __STATIC_INLINE
#define __STATIC_INLINE __STATIC_INLINE1

void mock_nrf_802154_rx_buffer_Init(void);
void mock_nrf_802154_rx_buffer_Destroy(void);
void mock_nrf_802154_rx_buffer_Verify(void);




#define nrf_802154_rx_buffer_init_Ignore() nrf_802154_rx_buffer_init_CMockIgnore()
void nrf_802154_rx_buffer_init_CMockIgnore(void);
#define nrf_802154_rx_buffer_init_Expect() nrf_802154_rx_buffer_init_CMockExpect(__LINE__)
void nrf_802154_rx_buffer_init_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_nrf_802154_rx_buffer_init_CALLBACK)(int cmock_num_calls);
void nrf_802154_rx_buffer_init_StubWithCallback(CMOCK_nrf_802154_rx_buffer_init_CALLBACK Callback);
#define nrf_802154_rx_buffer_free_find_IgnoreAndReturn(cmock_retval) nrf_802154_rx_buffer_free_find_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void nrf_802154_rx_buffer_free_find_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, rx_buffer_t* cmock_to_return);
#define nrf_802154_rx_buffer_free_find_ExpectAndReturn(cmock_retval) nrf_802154_rx_buffer_free_find_CMockExpectAndReturn(__LINE__, cmock_retval)
void nrf_802154_rx_buffer_free_find_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, rx_buffer_t* cmock_to_return);
typedef rx_buffer_t* (* CMOCK_nrf_802154_rx_buffer_free_find_CALLBACK)(int cmock_num_calls);
void nrf_802154_rx_buffer_free_find_StubWithCallback(CMOCK_nrf_802154_rx_buffer_free_find_CALLBACK Callback);

#endif
