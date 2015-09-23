//MinEngineProgmem.h  Program memory for Audio engine for miniAtmegatron
//Copyright (C) 2015  Paul Soulsby info@soulsbysynths.com
//
//This program is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with this program.  If not, see <http://www.gnu.org/licenses/>.


#ifndef MINENGINEPROGMEM_H_
#define MINENGINEPROGMEM_H_

#include <avr/pgmspace.h>

static const unsigned int envADR_inc[16] PROGMEM = {32767,4095,1424,682,372,217,133,86,57,38,26,19,13,9,7,5};
static const int envS_level[16] PROGMEM = {0,2048,4352,6400,8704,10752,13056,15104,17408,19456,21760,23808,26112,28160,30464,32767};

static const unsigned int porta_speed[16] PROGMEM = {0,5,14,27,46,77,123,195,306,477,740,1145,1768,2728,4207,6484};                            

static const unsigned char osc_preset_table[16] PROGMEM = { 0, 4, 9, 1, 2, 3,11,14, 0, 1, 4, 7, 8,12,13,15};  
static const unsigned char osc_preset_bank[16] PROGMEM =  { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0};

static const unsigned char envA_preset[16] PROGMEM =  {0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 5, 7, 7, 7,11,15};
static const unsigned char envDR_preset[16] PROGMEM = {0, 3, 5, 5, 7, 7,11,11, 0, 5, 7, 0, 3, 7, 7,15};
static const unsigned char envS_preset[16] PROGMEM =  {15,0, 0,15, 0, 7, 0,15, 0, 0, 0, 0, 0, 7, 7, 0};

#endif /* MINENGINEPROGMEM_H_ */