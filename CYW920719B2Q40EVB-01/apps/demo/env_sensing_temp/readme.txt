 -------------------------------------------------------------------------------
 CE226300: Thermistor (Environment Sensing Profile) application
 -------------------------------------------------------------------------------

 Overview
 --------
 This code example implements BLE Environmental Sensing Service with temperature
 characteristics. During initialization, the code example registers with BLE
 stack to receive various notifications and connection status change. Connected
 devices can read temperature value or get notified of change in temperature
 values.

 See chip specific readme file for more information about the BT SDK.
 Refer to modus.mk to see the list of supported platforms.

 Instructions
 ------------
 To demonstrate this code example, work through the following steps.
 1. Plug one of the supported kits to your PC. Ensure that
    "THERMISTOR ENABLE" jumper (labeled on the PCB) is connected.
 2. Build and download the application.
 3. Use terminal emulation tools like Tera Term to view the log/trace messages
    and open the serial port of WICED Peripheral UART with the below settings.
    [Baud rate: 115,200bps; Data: 8 bits; Parity: None; Stop bit: 1 bit]
 4. Scan and connect to this device advertising as "Thermistor" from a central
    device (e.g. CySmart mobile app).
 5. Enable notifications or read values (Temperature values) from the central
    device.

For more details on this code example including the design and implementation,
please refer to the CE document available under this example's folder at GitHub
(https://github.com/cypresssemiconductorco/Code-Examples-BT-SDK-for-ModusToolbox)

 Application Settings
 --------------------
 Application specific settings are -
 OTA_SEC_FW_UPGRADE
    Use this option for secure OTA firmware upgrade

 Notes
 -----
 This application supports OTA Firmware Upgrade. To update the application,
 see the OTA application note in chip specific readme file. Also see note at the end
 of thermistor_app.c for Bluetooth Configurator and OTA.

-------------------------------------------------------------------------------
