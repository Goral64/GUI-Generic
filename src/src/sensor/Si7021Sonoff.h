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

#ifndef SUPLA_SENSOR_SI_7021_SONOFF_H_
#define SUPLA_SENSOR_SI_7021_SONOFF_H_

// Dependency: DHTNew Library
// https://github.com/RobTillaart/DHTNew

#include <dhtnew.h>

#include <supla/sensor/therm_hygro_meter.h>

namespace Supla {
namespace Sensor {
class Si7021Sonoff : public ThermHygroMeter {
 public:
  Si7021Sonoff(int8_t pin):sensor(pin) {
    sensor.setType(70);//type for sonoff
    retryCountTemp = 0;
    retryCountHumi = 0;
    lastValidTemp = TEMPERATURE_NOT_AVAILABLE;
    lastValidHumi = HUMIDITY_NOT_AVAILABLE;
  }

  double getTemp() {
    double value = TEMPERATURE_NOT_AVAILABLE;
    
    value = sensor.getTemperature();
    if (isnan(value)) {
      value = TEMPERATURE_NOT_AVAILABLE;
    }

    if (value == TEMPERATURE_NOT_AVAILABLE) {
      retryCountTemp++;
      if (retryCountTemp > 3) {
        retryCountTemp = 0;
      }
      else {
        value = lastValidTemp;
      }
    }
    else {
      retryCountTemp = 0;
    }
    lastValidTemp = value;

    return value;
  }

  double getHumi() {
    double value = HUMIDITY_NOT_AVAILABLE;
    value = sensor.getHumidity();
    if (isnan(value)) {
      value = HUMIDITY_NOT_AVAILABLE;
    }

    if (value == HUMIDITY_NOT_AVAILABLE) {
      retryCountHumi++;
      if (retryCountHumi > 3) {
        retryCountHumi = 0;
      }
      else {
        value = lastValidHumi;
      }
    }
    else {
      retryCountHumi = 0;
    }
    lastValidHumi = value;

    return value;
  }

  void iterateAlways() {
    if (lastReadTime + 10000 < millis()) {
      lastReadTime = millis();
      sensor.read();
      channel.setNewValue(getTemp(), getHumi());
    }
  }

 protected:
  ::DHTNEW sensor;
  double lastValidTemp;
  double lastValidHumi;
  int8_t retryCountTemp;
  int8_t retryCountHumi;
};

};  // namespace Sensor
};  // namespace Supla

#endif  // SRC_SUPLA_SENSOR_LM75_H_
