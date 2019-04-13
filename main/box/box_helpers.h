/*
 * Copyright (C) 2019  SuperGreenLab <towelie@supergreenlab.com>
 * Author: Constantin Clauzel <constantin.clauzel@gmail.com>
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
 */

#ifndef BOX_HELPERS_H_
#define BOX_HELPERS_H_

#define BOX_CB_H(boxId, param) int on_set_box_## boxId ##_## param( int value);
#define BOX_GETTER_H(param) int get_box_## param(int boxId);
#define BOX_SETTER_H(param) void set_box_## param(int boxId, int value);

BOX_CB_H(0, sht21_temp_c)
BOX_CB_H(0, sht21_temp_f)
BOX_CB_H(0, sht21_humi)
BOX_CB_H(1, sht21_temp_c)
BOX_CB_H(1, sht21_temp_f)
BOX_CB_H(1, sht21_humi)

BOX_SETTER_H(sht21_temp_c)
BOX_GETTER_H(sht21_temp_c)
BOX_SETTER_H(sht21_temp_f)
BOX_GETTER_H(sht21_temp_f)
BOX_SETTER_H(sht21_humi)
BOX_GETTER_H(sht21_humi)

#endif
