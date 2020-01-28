/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

// User-defined table 1
// Dummy Thermistor table.. It will ALWAYS read a fixed value.
//#ifndef DUMMY_THERMISTOR_998_VALUE
//  #define DUMMY_THERMISTOR_998_VALUE 25
//#endif

const short temptable_998[][2] PROGMEM = {
  { OV(   1), 713 },
  { OV(  15), 300 }, // top rating 300C
  { OV(  16), 290 },
  { OV(  18), 280 },
  { OV(  20), 270 },
  { OV(  23), 260 },
  { OV(  26), 250 },
  { OV(  31), 240 },
  { OV(  37), 230 },
  { OV(  45), 220 },
  { OV(  61), 200 },
  { OV(  96), 180 },
  { OV( 154), 160 },
  { OV( 240), 140 },
  { OV( 380), 120 },
  { OV( 535), 100 },
  { OV( 635),  90 },
  { OV( 713),  80 },
  { OV( 784),  70 },
  { OV( 846),  60 },
  { OV( 897),  50 },
  { OV( 937),  40 },
  { OV( 966),  30 },
  { OV( 986),  20 },
  { OV(1000),  10 },
  { OV(1010),   0 }
};
