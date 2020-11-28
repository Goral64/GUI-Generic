/*
  Copyright (C) krycha88

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef SuplaWebServer_h
#define SuplaWebServer_h
#include "GUI-Generic_Config.h"

#ifdef SUPLA_OTA
#include "SuplaHTTPUpdateServer.h"
#endif
#include <ESP8266WebServer.h>
#include <supla/element.h>

#include "SuplaConfigManager.h"

#define GUI_BLUE  "#005c96"
#define GUI_GREEN "#00D151"

#define DEFAULT_LOGIN    "admin"
#define DEFAULT_PASSWORD "password"

#define MAX_GPIO 13
#define OFF_GPIO 17

#define PATH_START            "/"
#define PATH_SAVE_LOGIN       "savelogin"
#define PATH_REBOT            "rbt"
#define PATH_DEVICE_SETTINGS  "devicesettings"
#define PATH_DEFAULT_SETTINGS "defaultsettings"
#define PATH_LOGIN_SETTINGS   "loginsettings"
#define PATH_SAVE_BOARD       "saveboard"

#define INPUT_WIFI_SSID     "sid"
#define INPUT_WIFI_PASS     "wpw"
#define INPUT_EMAIL         "eml"
#define INPUT_SERVER        "svr"
#define INPUT_HOSTNAME      "shn"
#define INPUT_MODUL_LOGIN   "mlg"
#define INPUT_MODUL_PASS    "mps"
#define INPUT_ROLLERSHUTTER "irsr"
#define INPUT_BOARD         "board"

class SuplaWebServer : public Supla::Element {
 public:
  SuplaWebServer();
  void begin();

  char www_username[MAX_MLOGIN];
  char www_password[MAX_MPASSWORD];

  const String SuplaFavicon();
  const String SuplaIconEdit();
  const String SuplaJavaScript(String java_return = PATH_START);
  const String SuplaSaveResult(int save);

  void sendContent(const String content);

  ESP8266WebServer httpServer = {80};
  
#ifdef SUPLA_OTA
   ESP8266HTTPUpdateServer httpUpdater;
#endif

  bool saveGPIO(const String& input, uint8_t function, uint8_t nr = 0, const String& input_max = "\n");

 private:
  void iterateAlways();
  void handle();
  void handleSave();
  void handleWizardSave();
  void handleDeviceSettings();
  void handleBoardSave();
  void handleDefaultSettings();
  void handleLoginSettings();
  void createWebServer();

  String supla_webpage_start(int save);
  void supla_webpage_reboot();
  String deviceSettings(int save);
  String loginSettings();

  void redirectToIndex();
};

#endif  // SuplaWebServer_h
