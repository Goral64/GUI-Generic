#ifndef _LANGUAGE_DE_S_H_
#define _LANGUAGE_DE_S_H_

#define S_LANG "de"

#define S_SETTING_FOR             "Einstellungen für"
#define S_SETTING_WIFI_SSID       "WIFI Einstellung"
#define S_WIFI_SSID               "WIFI Name"
#define S_WIFI_PASS               "Passwort"
#define S_HOST_NAME               "Modulname"
#define S_SETTING_SUPLA           "SUPLA Einstellung"
#define S_SUPLA_SERVER            "Serveradresse"
#define S_SUPLA_EMAIL             "Email"
#define S_SETTING_ADMIN           "Administratordaten"
#define S_LOGIN                   "Login"
#define S_LOGIN_PASS              "Passwort"
#define S_ROLLERSHUTTERS          "Schalousien"
#define S_SAVE                    "Speichern"
#define S_DEVICE_SETTINGS         "Gerät Einstellung"
#define S_TOOLS                   "Werkzeuge"
#define S_SAVE_CONFIGURATION      "Konfiguration speichern"
#define S_LOAD_CONFIGURATION      "Konfiguration laden"
#define S_RESET_CONFIGURATION     "Geräteeinstellungen zurücksetzen"
#define S_RESTORE_FACTORY_SETTING "Stellen Sie die Werkseinstellungen wieder her"
#define S_UPDATE                  "Aktualisierung"
#define S_RESTART                 "Neustart"
#define S_RETURN                  "Zurück"
#define S_CONDITION               "Bedingung"

#define S_TEMPLATE_BOARD                                       "Modul Vorlage"
#define S_TYPE                                                 "Typ"
#define S_RELAYS                                               "RELAIS"
#define S_BUTTONS                                              "TASTEN"
#define S_SENSORS_1WIRE                                        "1Wire SENSOREN"
#define S_SENSORS_I2C                                          "i2c SENSOREN"
#define S_SENSORS_SPI                                          "SPI SENSOREN"
#define S_SENSORS_OTHER                                        "ANDERE SENSOREN"
#define S_CONFIGURATION                                       "LED, TASTENKONFIGURATION"
#define S_CFG_MODE                                             "Modus"
#define S_QUANTITY                                             "MENGE"
#define S_GPIO_SETTINGS_FOR_RELAYS                             "GPIO-Parameter für Relais"
#define S_RELAY                                                "RELAIS"
#define S_RELAY_NR_SETTINGS                                    "Konfiguration des Relais Nr. "
#define S_STATE_CONTROL                                        "Status Kontrolle"
#define S_REACTION_AFTER_RESET                                 "Reaktion nach Neustart"
#define S_LIGHT_RELAY                                          "Sterowowanie światłem"
#define S_GPIO_SETTINGS_FOR_BUTTONS                            "GPIO-Parameter für Tasten"
#define S_BUTTON                                               "TASTE"
#define S_BUTTON_NR_SETTINGS                                   "Parameter für Tasten Nr. "
#define S_REACTION                                             "Reaktion"
#define S_RELAY_CONTROL                                        "Relaissteuerung"
#define S_ACTION                                               "Action"
#define S_GPIO_SETTINGS_FOR_LIMIT_SWITCH                       "GPIO-Einstellungen für Endschalter"
#define S_LIMIT_SWITCH                                         "ENDSCHALTER"
#define S_GPIO_SETTINGS_FOR                                    "GPIO-Parameter für"
#define S_FOUND                                                "Gefunden"
#define S_NO_SENSORS_CONNECTED                                 "Fehlende angeschlossene Sensoren"
#define S_SAVE_FOUND                                           "Gefunden Speichern"
#define S_TEMPERATURE                                          "Temperatur"
#define S_NAME                                                 "Name"
#define S_ALTITUDE_ABOVE_SEA_LEVEL                             "Höhe über dem Meeresspiegel"
#define S_GPIO_SETTINGS_FOR_CONFIG                             "GPIO-Parameter für CONFIG"
#define S_SOFTWARE_UPDATE                                      "Software-Update"
#define S_DATA_SAVED                                           "Daten Gespeichert"
#define S_RESTART_MODULE                                       "Modul Neustart"
#define S_DATA_ERASED_RESTART_DEVICE                           "Daten Gelöscht: Modul Neu Starten"
#define S_WRITE_ERROR_UNABLE_TO_READ_FILE_FS_PARTITION_MISSING "Schreibfehler: Datei kann nicht gelesen werden. FS-Partition fehlt."
#define S_DATA_SAVED_RESTART_MODULE                            "Daten Gespeichert: Modul Neustart."
#define S_WRITE_ERROR_BAD_DATA                                 "Schreibfehler - falsche Daten."
#define S_SETTINGS_FOR                                         "Ustawienie dla"
#define S_ACTION_TRIGGER                                       "Action trigger"
#define S_ADDITIONAL                                           "Additionnel"

//#### SuplaConfigESP.cpp ####
#define S_STATUS_ALREADY_INITIALIZED     "Bereits gestartet"
#define S_STATUS_INVALID_GUID            "Falsche GUID-ID"
#define S_STATUS_UNKNOWN_SERVER_ADDRESS  "Unbekannte Serveradresse"
#define S_STATUS_UNKNOWN_LOCATION_ID     "Unbekannte ID"
#define S_STATUS_INITIALIZED             "Gestartet"
#define S_STATUS_CHANNEL_LIMIT_EXCEEDED  "Kanallimit überschritten"
#define S_STATUS_SERVER_DISCONNECTED     "off-line"
#define S_STATUS_REGISTER_IN_PROGRESS    "Ausstehende Registrierung"
#define S_STATUS_PROTOCOL_VERSION_ERROR  "Protokollversionsfehler"
#define S_STATUS_BAD_CREDENTIALS         "falsche Anmeldeinformationen"
#define S_STATUS_TEMPORARILY_UNAVAILABLE "Vorübergehend nicht erreichbar"
#define S_STATUS_LOCATION_CONFLICT       "Lokalisierungskonflikt"
#define S_STATUS_CHANNEL_CONFLICT        "Kanalkonflikt"
#define S_STATUS_REGISTERED_AND_READY    "Registriert und bereit"
#define S_STATUS_DEVICE_IS_DISABLED      "Gerät ist abgeschalten"
#define S_STATUS_LOCATION_IS_DISABLED    "Die Lokalisierung ist deaktiviert"
#define S_STATUS_DEVICE_LIMIT_EXCEEDED   "Gerätelimit überschritten"
#define S_STATUS_REGISTRATION_DISABLED   "INAKTIVE Geräte Registrierung"
#define S_STATUS_MISSING_CREDENTIALS     "Fehlende E-Mail-Adresse"
#define S_STATUS_INVALID_AUTHKEY         "Fehlender AuthKey"
#define S_STATUS_NO_LOCATION_AVAILABLE   "Kein Standort verfügbar!"
#define S_STATUS_UNKNOWN_ERROR           "Unbekannter Registrierungsfehler"
#define S_STATUS_NETWORK_DISCONNECTED    "Keine Verbindung zum Netzwerk"

//#### SuplaCommonPROGMEM.h ####
#define S_OFF                          "AUS"
#define S_ON                           "EINGESCHALTET"
#define S_TOGGLE                       "TOGGLE"
#define S_LOW                          "NIEDRIG"
#define S_HIGH                         "HOCH"
#define S_POSITION_MEMORY              "LETZTEN STAND ZURÜCKSETZEN"
#define S_REACTION_ON_PRESS            "WENN GEDRÜCKT"
#define S_REACTION_ON_RELEASE          "WENN LOSGELASSEN"
#define S_REACTION_ON_CHANGE           "STATUS ÄNDERUNG"
#define S_REACTION_ON_HOLD             "IN WARTESTELLUNG"
#define S_REACTION_MOTION_SENSOR       "MOTION SENSOR"
#define S_REACTION_AUTOMATIC_STAIRCASE "AUTOMATIC STAIRCASE"
#define S_CFG_10_PRESSES               "10 MAL DRÜCKEN"
#define S_5SEK_HOLD                    "5 SEKUNDEN GEDRÜCKT HALTEN"
#define S_NORMAL                       "NORMAL"
#define S_SLOW                         "SCHLEPPEND"
#define S_MANUALLY                     "MANUELL"

#ifdef SUPLA_CONDITIONS
#define S_CONDITIONING     "Konditionierung"
#define S_TURN_ON_WHEN     "EIN wenn Wert"
#define S_SWITCH_ON_VALUE  "Schaltwert"
#define S_SWITCH_OFF_VALUE "Aus-Wert"

#define S_ON_LESS    "kleiner"
#define S_ON_GREATER "größer"

#define S_CHANNEL_VALUE "Kanal"
#define S_HUMIDITY      "Feuchtigkeit"
#define S_VOLTAGE       "Spannung[V]"
#define S_CURRENT       "Strom[A]"
#define S_POWER         "Wirkleistung [W]"
#endif

//#### SuplaWebServer.cpp ####
#define S_LIMIT_SWITCHES "GRENZSCHALTER"
#define S_CORRECTION     "KORREKTUR FÜR SENSOREN"

//#### SuplaTemplateBoard.h ####
#define S_ABSENT "ABWESEND"

//#### SuplaWebPageSensor.cpp ####
#define S_IMPULSE_COUNTER                  "Impulszähler"
#define S_IMPULSE_COUNTER_DEBOUNCE_TIMEOUT "Zeitlimit"
#define S_IMPULSE_COUNTER_RAISING_EDGE     "Steigende Flanke"
#define S_IMPULSE_COUNTER_PULL_UP          "Pull-up"
#define S_IMPULSE_COUNTER_CHANGE_VALUE     "Wertänderung"
#define S_SCREEN_TIME                      "Bildschirm [s]"
#define S_OLED_BUTTON                      "OLED-Taste"
#define S_SCREEN                           "Bildschirm"
#define S_BACKLIGHT_S                      "Hintergrundbeleuchtung [s]"
#define S_BACKLIGHT_PERCENT                "Helligkeit [%]"
#define S_ADDRESS                          "Adresse"

//#### SuplaWebPageUpload.cpp ####
#define S_GENERATE_GUID_AND_KEY "Generieren GUID & AUTHKEY"
#define S_UPLOAD                "Hochladen"

//#### SuplaWebPageControl.cpp ####
#define S_SETTINGS_FOR_BUTTONS "Einstellungen für Schaltflächen"
#define S_REVERSE_LOGIC        "Umgekehrte Logik"
#define S_INTERNAL_PULL_UP     "Interner Klimmzug"

//#### SuplaWebPageOther.cpp ####
#define S_CALIBRATION             "Kalibrierung"
#define S_CALIBRATION_SETTINGS    "Kalibrierungseinstellungen"
#define S_BULB_POWER_W            "Lampenleistung [W]"
#define S_VOLTAGE_V               "Spannung [V]"
#define S_DEPTH_CM                "Tiefe [cm]"
#define S_SENSOR_READING_DISTANCE "Sensorleseabstand"
#define S_ELECTRIC_PHASE          "1/3phases"
#define S_OPTIONAL                "(Optional)"
#define S_STATUS_LED              "Status LED"

//#### SuplaWebPageRelay.cpp ####
#define S_RELAY_ACTIVATION_STATUS "Relaisaktivierungsstatus"
#define S_STATE                   "Zustand"
#define S_MESSAGE                 "Botschaft"
#define S_DIRECT_LINKS            "Direkte Links"
#define S_SENSOR                  "Sensor"
#define S_SETTINGS_FOR_RELAYS     "Einstellungen für Relais"

//#### SuplaHTTPUpdateServer.cpp ####
#define S_FLASH_MEMORY_SIZE        "Flash-Speichergröße"
#define S_SKETCH_MEMORY_SIZE       "Speichergröße skizzieren"
#define S_SKETCH_LOADED_SIZE       "Skizze geladene Größe"
#define S_SKETCH_UPLOAD_MAX_SIZE   "Skizze Hochladen Max Größe"
#define S_UPDATE_FIRMWARE          "Firmware aktualisieren"
#define S_UPDATE_SUCCESS_REBOOTING "Update Erfolg! Neustart ..."
#define S_WARNING                  "WARNUNG"
#define S_ONLY_2_STEP_OTA          "Verwenden Sie nur das 2-Schritt-OTA-Update. Benutzen"

//#### SuplaOled.cpp ####
#define S_CONFIGURATION_MODE "Konfigurationsmodus"
#define S_AP_NAME            "AP-Name"
#define S_ERROR              "error"

//#### SuplaWebCorrection.cpp ####
#define S_CORRECTION_FOR_CH "Korrektur für Kanäle"
#define S_CH_CORRECTION     "Kanalkorrektur:"

#ifdef SUPLA_RF_BRIDGE
#define S_CODES       "codes"
#define S_NO          "no"
#define S_READ        "Read"
#define S_TRANSMITTER "Transmitter"
#define S_RECEIVER    "Receiver"
#endif

#define S_TEMP_HYGR         "Temperatur + Feuchtigkeit"
#define S_PRESS             "Druck"
#define S_ELECTRICITY_METER "Stromzähler"
#define S_DISTANCE          "Distanz"

#ifdef SUPLA_PUSHOVER
#define S_SOUND "Sound"
#endif

#define S_BAUDRATE "Baudrate"

#ifdef SUPLA_THERMOSTAT
#define S_HEAT                     "Heat"
#define S_COOL                     "Cool"
#define S_DOMESTIC_HOT_WATER       "Domestic hot water"
#define S_DIFFERENTIAL             "Differential"
#define S_THERMOSTAT               "Thermostat"
#define S_THERMOSTAT               "Thermostat"
#define S_MAIN_THERMOMETER_CHANNEL "Main thermometrer"
#define S_AUX_THERMOMETER_CHANNEL  "Aux thermometrer"
#define S_HISTERESIS               "Histeresis"
#endif

#ifdef SUPLA_CC1101
#define S_WMBUS_METER "Meter"
#define S_WMBUS_SENSOR_TYPE "Sensor type"
#define S_WMBUS_SENSOR_ID "Sensor id"
#define S_WMBUS_SENSOR_KEY "Sensor key"
#define S_WMBUS_SENSOR_PROP "Sensor property"
#endif

#endif  // _LANGUAGE_DE_S_H_
