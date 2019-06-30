/***************************************************************************//**
* File Name: cycfg_bt_gatt_db.c
* Version: 1.1
*
* Description:
* BLE device's GATT database and device configuration.
* This file should not be modified. It was automatically generated by
* Bluetooth Configurator 1.1.0 build 186
*
********************************************************************************
* Copyright 2019 Cypress Semiconductor Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#include "cycfg_gatt_db.h"
#include "wiced_bt_uuid.h"
#include "wiced_bt_gatt.h"

/*************************************************************************************
* GATT server definitions
*************************************************************************************/

const uint8_t gatt_database[] =
{
    /* Primary Service: Generic Access */
    PRIMARY_SERVICE_UUID16 (HDLS_GAP, __UUID_SERVICE_GENERIC_ACCESS),
        /* Characteristic: Device Name */
        CHARACTERISTIC_UUID16 (HDLC_GAP_DEVICE_NAME, HDLC_GAP_DEVICE_NAME_VALUE, __UUID_CHARACTERISTIC_DEVICE_NAME, LEGATTDB_CHAR_PROP_READ, LEGATTDB_PERM_READABLE),
        /* Characteristic: Appearance */
        CHARACTERISTIC_UUID16 (HDLC_GAP_APPEARANCE, HDLC_GAP_APPEARANCE_VALUE, __UUID_CHARACTERISTIC_APPEARANCE, LEGATTDB_CHAR_PROP_READ, LEGATTDB_PERM_READABLE),

    /* Primary Service: Generic Attribute */
    PRIMARY_SERVICE_UUID16 (HDLS_GATT, __UUID_SERVICE_GENERIC_ATTRIBUTE),

    /* Primary Service: TPUT */
    PRIMARY_SERVICE_UUID128 (HDLS_TPUT, __UUID_SERVICE_TPUT),
        /* Characteristic: Notify */
        CHARACTERISTIC_UUID128 (HDLC_TPUT_NOTIFY, HDLC_TPUT_NOTIFY_VALUE, __UUID_CHARACTERISTIC_TPUT_NOTIFY, LEGATTDB_CHAR_PROP_READ | LEGATTDB_CHAR_PROP_NOTIFY, LEGATTDB_PERM_READABLE),
            /* Descriptor: Descriptor */
            CHAR_DESCRIPTOR_UUID16_WRITABLE (HDLD_TPUT_NOTIFY_DESCRIPTOR, __UUID_DESCRIPTOR_CLIENT_CHARACTERISTIC_CONFIGURATION, LEGATTDB_PERM_READABLE | LEGATTDB_PERM_WRITE_REQ),
};

/* Length of the GATT database */
const uint16_t gatt_database_len = sizeof(gatt_database);

/*************************************************************************************
 * GATT Initial Value Arrays
 ************************************************************************************/

uint8_t app_gap_device_name[]        = {'T', 'P', 'U', 'T', };
uint8_t app_gap_appearance[]         = {0x00u, 0x00u, };
uint8_t app_tput_notify[]            = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', };
uint8_t app_tput_notify_descriptor[] = {0x00u, 0x00u, };

 /************************************************************************************
 * GATT Lookup Table
 ************************************************************************************/

gatt_db_lookup_table_t app_gatt_db_ext_attr_tbl[] =
{
    /* { attribute handle,         maxlen, curlen, attribute data } */
    { HDLC_GAP_DEVICE_NAME_VALUE,  4,      4,      app_gap_device_name },
    { HDLC_GAP_APPEARANCE_VALUE,   2,      2,      app_gap_appearance },
    { HDLC_TPUT_NOTIFY_VALUE,      10,     10,     app_tput_notify },
    { HDLD_TPUT_NOTIFY_DESCRIPTOR, 2,      2,      app_tput_notify_descriptor },
};

/* Number of Lookup Table entries */
const uint16_t app_gatt_db_ext_attr_tbl_size = (sizeof(app_gatt_db_ext_attr_tbl) / sizeof(gatt_db_lookup_table_t));

/* Number of GATT initial value arrays entries */
const uint16_t app_gap_device_name_len = (sizeof(app_gap_device_name));
const uint16_t app_gap_appearance_len = (sizeof(app_gap_appearance));
const uint16_t app_tput_notify_len = (sizeof(app_tput_notify));
const uint16_t app_tput_notify_descriptor_len = (sizeof(app_tput_notify_descriptor));

