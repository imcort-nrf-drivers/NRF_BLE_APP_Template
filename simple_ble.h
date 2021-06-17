#ifndef __SIMPLE_BLE_H__
#define __SIMPLE_BLE_H__

#include "nrf_log.h"

#include "ble_hci.h"
#include "ble_advdata.h"
#include "ble_advertising.h"
#include "ble_conn_params.h"
#include "nrf_sdh.h"
#include "nrf_sdh_soc.h"
#include "nrf_sdh_ble.h"
#include "nrf_ble_gatt.h"
#include "nrf_ble_qwr.h"
#include "ble_nus.h"

#include "bsp_btn_ble.h"
#include "app_timer.h"

void bsp_event_handler(bsp_event_t event);
void simple_ble_init(void * nus_data_handler);
void advertising_start(void);

#endif
