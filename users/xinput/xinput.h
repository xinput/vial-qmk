/* Copyright 2022 Pascalis Dapkas @xinput

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// KEYCODES
enum custom_user_keycodes {
  KC_00 = SAFE_RANGE,
  ENCFUNC,
  RGB_TOI,      // Timeout idle time up
  RGB_TOD,      // Timeout idle time down
  RGB_NITE,     // Turns off all rgb but allow rgb indicators to work

  KC_TSTOG,     // Tab Scroll Toggle

  NEW_SAFE_RANGE  // new safe range for keymap level custom keycodes
};

// IDLE TIMEOUTS
#ifdef IDLE_TIMEOUT_ENABLE
    #define TIMEOUT_THRESHOLD_DEFAULT   5    // default timeout minutes
    #define TIMEOUT_THRESHOLD_MAX       140  // upper limits (2 hours and 10 minutes -- no rgb indicators above this value)

    //prototype  functions
    uint16_t get_timeout_threshold(void);
    void timeout_reset_timer(void);
    void timeout_update_threshold(bool increase);
    void timeout_tick_timer(void);
#endif  //IDLE_TIMEOUT_ENABLE

