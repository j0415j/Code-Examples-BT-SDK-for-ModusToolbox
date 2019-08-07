/***************************************************************************//**
* File Name: app_gatt_db.h
* Version: 1.1
*
* Description:
* Definitions for constants used in the device's GATT database and function
* prototypes.
* This file should not be modified. It was automatically generated by
* Bluetooth Configurator 1.1.0 build 89
*
********************************************************************************
* Copyright 2019, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#ifndef __GATT_DATABASE_H__
#define __GATT_DATABASE_H__

#define __UUID_SERVICE_GENERIC_ACCESS                      0x1800u
#define __UUID_CHARACTERISTIC_DEVICE_NAME                  0x2A00u
#define __UUID_CHARACTERISTIC_APPEARANCE                   0x2A01u
#define __UUID_SERVICE_GENERIC_ATTRIBUTE                   0x1801u
#define __UUID_SERVICE_ALERT_NOTIFICATION                  0x1811u
#define __UUID_CHARACTERISTIC_SUPPORTED_NEW_ALERT_CATEGORY    0x2A47u
#define __UUID_CHARACTERISTIC_NEW_ALERT                    0x2A46u
#define __UUID_DESCRIPTOR_CLIENT_CHARACTERISTIC_CONFIGURATION    0x2902u
#define __UUID_CHARACTERISTIC_SUPPORTED_UNREAD_ALERT_CATEGORY    0x2A48u
#define __UUID_CHARACTERISTIC_UNREAD_ALERT_STATUS          0x2A45u
#define __UUID_CHARACTERISTIC_ALERT_NOTIFICATION_CONTROL_POINT    0x2A44u

/* Service Generic Access */
#define HDLS_GAP                                           0x0001u
/* Characteristic Device Name */
#define HDLC_GAP_DEVICE_NAME                               0x0002u
#define HDLC_GAP_DEVICE_NAME_VALUE                         0x0003u
/* Characteristic Appearance */
#define HDLC_GAP_APPEARANCE                                0x0004u
#define HDLC_GAP_APPEARANCE_VALUE                          0x0005u

/* Service Generic Attribute */
#define HDLS_GATT                                          0x0006u

/* Service Alert Notification */
#define HDLS_ANS                                           0x0007u
/* Characteristic Supported New Alert Category */
#define HDLC_ANS_SUPPORTED_NEW_ALERT_CATEGORY              0x0008u
#define HDLC_ANS_SUPPORTED_NEW_ALERT_CATEGORY_VALUE        0x0009u
/* Characteristic New Alert */
#define HDLC_ANS_NEW_ALERT                                 0x000Au
#define HDLC_ANS_NEW_ALERT_VALUE                           0x000Bu
/* Descriptor Client Characteristic Configuration */
#define HDLD_ANS_NEW_ALERT_CLIENT_CHAR_CONFIG              0x000Cu
/* Characteristic Supported Unread Alert Category */
#define HDLC_ANS_SUPPORTED_UNREAD_ALERT_CATEGORY           0x000Du
#define HDLC_ANS_SUPPORTED_UNREAD_ALERT_CATEGORY_VALUE     0x000Eu
/* Characteristic Unread Alert Status */
#define HDLC_ANS_UNREAD_ALERT_STATUS                       0x000Fu
#define HDLC_ANS_UNREAD_ALERT_STATUS_VALUE                 0x0010u
/* Descriptor Client Characteristic Configuration */
#define HDLD_ANS_UNREAD_ALERT_STATUS_CLIENT_CHAR_CONFIG    0x0011u
/* Characteristic Alert Notification Control Point */
#define HDLC_ANS_ALERT_NOTIFICATION_CONTROL_POINT          0x0012u
#define HDLC_ANS_ALERT_NOTIFICATION_CONTROL_POINT_VALUE    0x0013u

/* External Lookup Table Entry */
typedef struct
{
    uint16_t handle;
    uint16_t max_len;
    uint16_t cur_len;
    uint8_t  *p_data;
} gatt_db_lookup_table_t;

/* External definitions */
extern const uint8_t  gatt_database[];
extern const uint16_t gatt_database_len;
extern gatt_db_lookup_table_t app_gatt_db_ext_attr_tbl[];
extern const uint16_t app_gatt_db_ext_attr_tbl_size;
extern uint8_t app_gap_device_name[];
extern const uint16_t app_gap_device_name_len;
extern uint8_t app_gap_appearance[];
extern const uint16_t app_gap_appearance_len;
extern uint8_t app_ans_supported_new_alert_category[];
extern const uint16_t app_ans_supported_new_alert_category_len;
extern uint8_t app_ans_new_alert[];
extern const uint16_t app_ans_new_alert_len;
extern uint8_t app_ans_new_alert_client_char_config[];
extern const uint16_t app_ans_new_alert_client_char_config_len;
extern uint8_t app_ans_supported_unread_alert_category[];
extern const uint16_t app_ans_supported_unread_alert_category_len;
extern uint8_t app_ans_unread_alert_status[];
extern const uint16_t app_ans_unread_alert_status_len;
extern uint8_t app_ans_unread_alert_status_client_char_config[];
extern const uint16_t app_ans_unread_alert_status_client_char_config_len;
extern uint8_t app_ans_alert_notification_control_point[];
extern const uint16_t app_ans_alert_notification_control_point_len;

#endif /* __GATT_DATABASE_H__ */