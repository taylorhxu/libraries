//AtmOscillatorProgmem.h  Progmem for Atmegatron Oscillator class
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

#ifndef ATEOSCOSCILLATORPROGMEM_H_
#define ATEOSCOSCILLATORPROGMEM_H_

#include <avr/pgmspace.h>
#define OSC_WAVELEN 128

const signed char OSC_WAVETABLE[2][16][OSC_WAVELEN] PROGMEM =
{
	{
		{
			-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127  //pure square
		},
		{
			50,83,86,88,89,90,91,92,93,93,93,94,94,94,94,94,94,94,94,93,93,93,93,93,92,92,91,91,91,90,90,91,4,-12,-14,-16,-18,-19,-20,-21,-22,-22,-23,-23,-24,-24,-24,-24,-24,-24,-24,-24,-24,-14,74,78,80,82,83,84,85,86,87,88,18,-7,-8,-10,-11,-12,-13,-13,-14,-14,-14,-15,-15,-15,-15,-15,-15,-16,-16,-15,-15,-16,-15,-15,-16,-15,-15,-15,-16,-15,-15,-17,-109,-120,-122,-123,-125,-126,-126,-126,-127,-127,-127,-128,-127,-127,-127,-127,-127,-126,-126,-126,-126,-109,-22,-19,-17,-14,-13,-12,-11,-10,-10,-10  //juno oct pulse
		},
		{
			99,104,107,109,111,114,116,118,121,122,53,0,1,5,7,-14,-116,-110,-107,-103,-100,-96,-92,-89,-85,-82,-78,-75,-72,-68,-65,-32,73,73,76,78,81,83,86,89,91,93,96,98,101,103,107,83,-20,-14,-12,-9,-7,-127,-128,-124,-120,-117,-113,-109,-105,-101,-99,-75,40,39,43,46,49,51,54,57,59,62,64,67,70,73,76,63,-50,-44,-41,-38,-34,-31,-28,-25,-22,-19,-16,-12,-9,-6,-3,0,2,5,8,11,14,17,20,22,25,28,32,34,37,40,43,38,-80,-76,-73,-69,-66,-63,-60,-56,-53,-49,-46,-43,-39,-36,-33,-26  //mss sq 5ths
		},
		{
			48,127,127,127,127,127,126,126,126,126,125,125,125,125,124,124,124,124,123,123,123,122,122,122,122,121,121,121,121,120,120,123,11,-46,-45,-45,-45,-45,-45,-45,-45,-44,-44,-44,-44,-44,-44,-44,-44,-44,-44,-43,-43,-43,-43,-43,-43,-43,-43,-43,-43,-43,-42,-42,-42,-42,-42,-42,-42,-42,-42,-42,-42,-41,-41,-41,-41,-41,-41,-41,-41,-41,-41,-41,-41,-40,-40,-40,-40,-40,-40,-40,-40,-40,-40,-40,-40,-39,-39,-39,-39,-39,-39,-39,-39,-39,-39,-39,-39,-38,-38,-38,-38,-38,-38,-38,-38,-38,-38,-38,-38,-37,-37,-37,-37,-37,-37,-36  //nes pulse
		},
		{
			-128,-126,-124,-122,-120,-118,-116,-114,-112,-110,-108,-106,-104,-102,-100,-98,-96,-94,-92,-90,-88,-86,-84,-82,-80,-78,-76,-74,-72,-70,-68,-66,-64,-62,-60,-58,-56,-54,-52,-50,-48,-46,-44,-42,-40,-38,-36,-34,-32,-30,-28,-26,-24,-22,-20,-18,-16,-14,-12,-10,-8,-6,-4,-2,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,106,108,110,112,114,116,118,120,122,124,126  //pure saw
		},
		{
			3,6,8,11,13,15,18,21,24,26,29,31,34,36,39,41,44,47,49,52,54,56,59,62,64,67,69,71,73,76,78,81,83,85,87,89,91,94,96,98,100,102,103,105,107,109,111,113,114,116,68,-57,-128,-92,-45,-23,-24,-30,-29,-17,0,11,12,6,0,-6,-20,-68,-93,-83,-67,-58,-56,-55,-52,-44,-36,-32,-31,-33,-36,-38,-39,-39,-39,-38,-37,-53,-91,-108,-95,-76,-69,-68,-70,-68,-63,-57,-53,-52,-53,-54,-54,-53,-52,-50,-48,-46,-44,-41,-39,-36,-33,-30,-28,-26,-24,-23,-20,-18,-16,-14,-12,-9,-7,-4,-2,0  //mss buzz saw
		},
		{
			-115,-127,-127,-125,-123,-120,-117,-114,-110,-106,-101,-97,-93,-88,-83,-78,-73,-68,-63,-58,-53,-48,-43,-38,-33,-28,-22,-17,-12,-7,-2,2,7,12,17,22,27,32,37,42,47,52,23,-31,-29,-25,-22,-18,-14,-9,-5,-1,3,8,12,17,22,27,31,36,41,46,51,51,-28,-30,-27,-23,-19,-16,-12,-7,-3,1,5,10,15,19,24,29,34,38,43,48,53,-8,-31,-28,-25,-22,-18,-14,-9,-5,-1,3,8,12,17,22,27,31,37,42,46,51,56,61,65,70,75,80,85,89,94,99,104,108,113,65,29,31,34,38,41,45,49,52 //juno saw 5ths
		},
		{
			53,60,65,69,73,77,80,83,85,88,91,93,95,98,100,102,104,106,108,110,112,113,115,117,119,120,122,124,126,127,127,90,6,4,4,4,4,6,7,8,10,11,13,15,17,19,21,23,25,27,29,31,33,36,38,41,43,45,47,50,52,54,56,38,-53,-54,-54,-53,-52,-51,-50,-48,-46,-44,-42,-40,-38,-35,-33,-31,-28,-26,-23,-21,-18,-16,-13,-11,-8,-6,-3,-1,1,4,5,-8,-118,-121,-122,-122,-121,-120,-119,-118,-116,-114,-112,-110,-108,-106,-104,-102,-99,-97,-94,-92,-89,-87,-85,-82,-80,-77,-74,-72,-69,-66,-64,-60 //juno unlfilt oct saw
		},
		{
			-5,-12,-18,-24,-30,-36,-39,-42,-45,-48,-59,-68,-73,-77,-63,-55,-54,-54,-85,-101,-104,-107,-63,-40,-37,-34,-90,-120,-120,-121,-47,-7,-3,0,-92,-121,-119,-116,-8,28,31,34,-70,-104,-100,-95,13,53,54,54,-40,-73,-67,-60,24,55,53,49,-10,-30,-23,-17,18,28,22,16,10,4,-1,-5,22,42,48,53,0,-28,-30,-31,43,86,90,93,2,-35,-34,-32,70,116,118,119,20,-21,-17,-14,83,127,127,125,27,3,6,11,96,119,116,112,43,25,27,29,79,91,86,80,43,31,31,30,47,49,42,36,22,16,12,7,5,0 //mss square sub sine
		},
		{
			0,6,12,19,25,31,37,43,49,54,60,65,71,76,81,85,90,94,98,102,106,109,112,115,117,120,122,123,125,126,126,127,127,127,126,126,125,123,122,120,117,115,112,109,106,102,98,94,90,85,81,76,71,65,60,54,49,43,37,31,25,19,12,6,0,-6,-12,-19,-25,-31,-37,-43,-49,-54,-60,-65,-71,-76,-81,-85,-90,-94,-98,-102,-106,-109,-112,-115,-117,-120,-122,-123,-125,-126,-126,-127,-127,-127,-126,-126,-125,-123,-122,-120,-117,-115,-112,-109,-106,-102,-98,-94,-90,-85,-81,-76,-71,-65,-60,-54,-49,-43,-37,-31,-25,-19,-12,-6 //pure sine
		},
		{
			1,13,26,38,46,49,49,47,45,43,43,45,52,60,71,87,98,108,114,116,115,112,107,101,97,96,99,104,111,119,126,127,127,127,127,127,120,109,100,94,92,92,96,100,104,108,109,106,99,89,77,64,52,42,35,32,32,34,36,38,38,35,27,15,-2,-19,-31,-41,-45,-45,-44,-42,-39,-38,-41,-47,-55,-66,-78,-91,-104,-110,-113,-112,-110,-105,-99,-95,-94,-96,-100,-110,-119,-126,-127,-127,-127,-127,-127,-120,-112,-104,-97,-94,-94,-97,-102,-107,-110,-112,-110,-105,-96,-83,-69,-57,-47,-40,-37,-36,-37,-40,-42,-42,-39,-33,-23,-9  //ppg sine harms
		},
		{
			15,43,49,45,43,46,49,48,47,50,52,52,51,53,55,56,55,57,60,61,61,62,66,68,68,70,76,80,80,84,101,123,127,112,91,79,76,73,66,61,60,59,55,51,50,49,46,43,42,42,40,37,36,36,34,31,30,31,30,26,24,28,28,12,-16,-41,-49,-45,-43,-47,-49,-48,-47,-49,-52,-52,-51,-53,-56,-56,-55,-57,-60,-61,-61,-63,-66,-68,-68,-70,-76,-80,-81,-86,-101,-121,-128,-112,-88,-78,-76,-73,-67,-62,-60,-59,-54,-51,-50,-49,-47,-44,-42,-42,-40,-37,-36,-36,-35,-31,-30,-31,-30,-25,-24,-27,-29,-15  //mss tit
		},
		{
			-68,-128,-2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5 //cz101 pulse
		},
		{
			-7,-35,-55,-62,-56,-39,-14,10,41,84,115,127,120,96,60,16,-26,-66,-93,-107,-110,-104,-88,-59,-23,10,40,64,79,85,81,68,48,24,-2,-27,-44,-56,-62,-61,-53,-39,-22,-4,13,27,39,45,45,40,31,20,5,-8,-19,-27,-32,-33,-31,-24,-16,-7,1,10,17,22,24,22,19,13,6,0,-7,-12,-15,-17,-17,-14,-11,-6,-1,3,7,10,12,12,11,8,5,1,-1,-4,-7,-8,-9,-8,-7,-5,-2,0,2,4,5,6,6,5,3,2,0,-1,-3,-4,-5,-4,-4,-3,-2,0,0,2,2,3,3,3,2,1,0,0  //multivox bassoon
		},
		{
			12,26,32,33,31,29,26,27,27,25,22,19,16,13,12,14,16,16,14,12,11,9,8,10,11,11,10,9,8,7,7,9,11,11,10,8,6,5,4,7,9,9,7,5,3,2,1,3,6,6,5,3,2,1,0,4,7,7,6,3,1,0,-1,0,3,3,2,0,0,-1,-1,0,3,4,2,1,0,-1,-2,0,2,2,1,0,-1,-2,-2,-1,0,0,0,0,-1,-2,-2,0,3,3,2,0,-1,-2,-2,0,3,3,1,0,-1,-3,-3,-1,1,1,0,-1,-2,-2,-6,-53,-105,-128,-124,-107,-84,-58,-34,-10  //multivox bass
		},
		{
			0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 //noise
		}
	},
	{
		{
			-50,-80,-99,-126,-125,-73,-40,0,30,-15,1,22,14,8,24,-14,-40,-41,-7,-29,-54,-52,-40,-65,-54,-17,-25,-31,-5,-10,4,17,-20,-15,-6,-33,-40,-64,-91,-104,-77,-74,-30,29,29,-9,-22,-30,-50,-15,13,-7,11,23,-32,-64,-71,-52,-41,-17,15,26,38,13,31,66,14,25,-9,-17,-4,72,83,40,34,58,93,84,49,14,10,-26,-23,-8,-2,61,99,71,89,121,127,119,34,1,30,57,33,-3,-17,25,12,5,27,-9,-66,10,29,-13,-52,-41,-10,-48,-20,52,61,30,11,34,50,62,86,71,19,-3,-39,-6,44,20 //mss metallic
		},
		{
			80,82,95,110,109,59,-9,-9,-9,-9,-60,-128,-126,-125,-124,-122,-60,-33,26,86,85,28,-3,-3,-3,-3,50,76,75,75,74,73,72,72,31,-3,-3,-89,-90,-89,-88,-88,-23,60,59,59,58,58,0,-30,-8,14,14,14,14,14,14,14,-16,32,34,34,33,34,-50,-54,-31,-1,3,87,85,85,84,83,76,66,66,65,64,19,-53,-52,-52,-51,-51,2,37,36,36,36,41,-30,-30,-29,-29,-29,-28,-28,-78,-124,-123,-76,-4,-4,-4,-4,-50,-113,-112,-111,-110,-67,8,8,8,8,8,8,8,8,8,7,-16,-5,-5,-5,-4,-6 //mss math 1 full
		},
		{
			3,9,15,22,28,34,39,45,51,56,26,-25,-44,-42,85,88,92,96,100,103,106,108,111,113,115,117,118,119,120,-4,-121,-114,-112,-112,-111,123,127,125,123,120,117,114,110,107,103,99,94,90,85,75,-21,-4,2,7,11,15,16,18,20,18,15,11,7,2,-4,-10,-16,-22,-28,-33,-37,-41,-45,-45,-45,-42,-40,-37,-32,-27,-21,-10,-60,-104,-107,-110,-112,-115,-116,-118,-119,-120,-121,-121,-121,-121,-121,39,119,116,116,118,108,-125,-119,-116,-112,-109,-105,-101,-96,-92,-87,-81,-76,-71,-66,-60,9,77,57,33,-35,-28,-21,-15,-9,-3 //mss math ii
		},
		{
			81,123,127,30,3,-52,-47,38,-14,-5,0,81,35,103,10,20,10,96,99,-58,-117,-28,2,-52,-74,-97,-8,48,14,77,-24,-31,111,36,63,-34,4,59,-35,3,53,-47,-39,103,6,-2,-1,-88,83,117,88,12,-2,-81,99,32,95,13,116,126,-17,103,127,101,-95,-128,-107,16,-123,-116,-15,-98,-35,-107,77,6,-8,-84,-118,-93,84,6,4,-4,-106,35,50,-50,-4,39,-58,-6,38,-60,-36,-114,27,28,-72,-14,-48,3,95,77,55,-1,21,117,71,-95,-99,-14,-21,-7,-101,-34,-81,-3,5,18,-39,45,56,1,-23,-125,-124,-122 //ppg buzz
		},
		{
			32,46,15,2,-13,-43,-40,-18,-13,8,38,43,0,-36,-49,-58,-56,-19,54,67,42,24,-22,-108,-120,-94,-66,-28,23,53,53,42,44,57,55,56,56,24,-6,-26,-53,-64,-29,0,24,65,87,55,26,7,-10,-13,29,63,72,60,32,-17,-45,-56,-49,36,63,82,86,36,-15,-67,-128,-96,-47,-11,32,82,70,54,23,-11,-38,-9,-24,-33,27,-13,-26,-14,-55,-59,4,29,40,89,108,46,4,-16,-64,-86,-8,1,-16,76,57,-59,-38,-6,-79,-63,53,45,2,50,8,-70,-43,-36,-87,-25,50,19,7,64,22,-66,-65,-27,-49,-35 //mss vocal
		},
		{
			8,37,59,82,105,122,127,127,127,127,127,127,127,123,110,93,77,61,46,33,20,10,3,-2,-5,-6,-6,-5,-2,1,5,8,11,13,12,11,8,3,0,-6,-13,-19,-28,-36,-41,-49,-55,-60,-65,-67,-66,-66,-64,-61,-58,-54,-47,-42,-36,-30,-24,-16,-10,-3,6,12,19,26,32,38,43,49,55,59,61,65,66,66,67,63,59,54,47,39,34,25,16,11,4,-1,-5,-11,-13,-14,-14,-13,-9,-6,-2,1,4,5,4,3,0,-5,-13,-23,-36,-49,-64,-80,-96,-112,-124,-128,-127,-127,-127,-128,-128,-127,-117,-99,-75,-52,-29,-3 //ppg vocal 1
		},
		{
			-83,-120,-123,-128,-111,-90,-104,-101,-76,-68,-71,-66,-80,-106,-114,-110,-108,-97,-92,-109,-125,-120,-108,-100,-97,-101,-114,-110,-87,-61,-37,-6,12,19,19,15,6,-6,-16,-22,-23,-19,-9,3,12,16,18,21,26,28,27,26,22,16,11,8,6,5,6,6,5,5,3,1,-1,-3,-3,-4,-4,-4,-4,-5,-8,-12,-17,-22,-25,-26,-25,-22,-17,-15,-13,-5,7,17,24,25,21,12,2,-9,-16,-18,-14,-1,23,52,78,103,117,109,99,99,102,114,127,116,95,91,103,106,111,109,86,66,66,63,66,89,103,88,97,117,119,114,115,34  //ppg vocal 3
		},
		{
			17,30,32,33,34,34,35,36,36,37,37,37,37,37,37,37,37,36,36,36,35,35,34,34,33,33,32,32,31,30,29,43,70,69,62,56,50,45,40,36,33,30,28,26,24,22,21,20,19,18,17,16,15,15,14,14,13,13,12,12,11,10,10,21,43,45,39,34,29,25,20,17,15,13,11,9,8,7,6,5,4,4,3,3,2,2,1,1,1,1,0,0,1,3,4,-36,-111,-128,-127,-124,-120,-116,-111,-106,-102,-98,-93,-89,-84,-80,-76,-73,-69,-65,-61,-57,-54,-51,-47,-44,-41,-38,-34,-31,-28,-26,-23,-8 //multivox brass
		},
		{
			-44,-116,-128,-117,-106,-102,-97,-88,-85,-89,-94,-98,-95,-86,-74,-60,-48,-39,-36,-37,-40,-40,-33,-19,-7,4,16,21,22,19,16,14,13,10,5,4,9,20,29,34,38,41,41,37,28,16,7,1,-4,-8,-8,-9,-12,-20,-25,-24,-15,-7,-5,-5,3,28,38,18,-22,-37,-24,-1,5,5,8,17,25,25,19,11,9,9,7,4,-2,-8,-17,-29,-37,-41,-40,-37,-33,-27,-18,-7,-3,-5,-10,-12,-13,-15,-19,-21,-19,-14,-1,10,21,35,41,41,38,36,40,50,61,75,87,96,97,93,87,84,87,95,100,104,116,126,109,48 //ppg reed organ
		},
		{
			10,29,45,60,75,89,100,109,117,120,117,109,93,74,59,49,44,46,52,61,72,82,88,92,91,88,84,81,76,68,58,47,36,27,22,20,19,19,20,20,18,13,3,-10,-32,-57,-77,-93,-104,-109,-109,-107,-105,-103,-105,-110,-117,-125,-128,-124,-114,-98,-81,-63,-43,-23,-6,10,27,43,57,69,80,88,90,86,77,65,56,51,52,58,65,71,73,66,50,24,-10,-45,-72,-90,-98,-97,-90,-81,-68,-56,-44,-33,-21,-9,0,8,15,17,14,6,-9,-29,-46,-58,-66,-69,-68,-64,-59,-56,-56,-59,-66,-72,-75,-71,-61,-45,-29,-11 //logic elec piano
		},
		{
			25,64,90,108,120,125,127,126,124,123,123,123,123,122,119,113,103,90,74,54,32,9,-18,-45,-67,-85,-100,-112,-120,-125,-126,-124,-120,-114,-107,-98,-88,-77,-65,-54,-43,-33,-22,-11,-1,10,22,33,43,53,63,73,84,94,103,110,116,120,122,122,118,110,99,85,68,48,25,-1,-29,-52,-73,-91,-105,-115,-122,-125,-126,-125,-124,-123,-122,-122,-122,-120,-116,-108,-93,-71,-42,-7,34,73,99,116,125,127,127,125,124,125,122,111,85,39,-21,-91,-123,-97,-26,55,111,118,68,-5,-62,-99,-118,-124,-124,-122,-121,-121,-120,-114,-101,-80,-50,-15  //mss reed
		},
		{
			-37,-102,-128,-98,-39,24,52,33,-26,-93,-123,-103,-41,24,56,41,-16,-84,-118,-102,-43,17,56,48,1,-67,-112,-102,-46,15,58,54,9,-58,-107,-106,-56,13,59,59,18,-49,-101,-105,-58,10,57,66,26,-33,-91,-104,-61,7,56,69,34,-25,-85,-103,-71,-4,55,74,47,-12,-68,-86,-59,0,55,75,55,5,-40,-62,-42,7,55,75,60,20,-19,-40,-26,8,50,73,66,35,0,-19,-11,16,50,69,66,43,14,0,2,24,49,65,64,48,28,16,18,32,48,59,60,52,40,32,33,40,48,54,55,51,47,46,47,49,48,17  //cz101 res saw
		},
		{
			9,49,59,37,39,57,46,-4,-48,-56,-39,-35,-58,-52,-16,5,9,29,57,60,50,40,2,-77,-123,-112,-96,-94,-71,-30,-5,-16,-42,-47,-8,29,42,47,54,53,36,16,2,-9,-7,19,26,0,-6,26,44,30,20,24,19,-3,-29,-38,-28,-12,1,18,22,22,40,76,111,117,114,125,112,13,-104,-128,-117,-119,-115,-79,-41,-25,-22,-19,-5,11,28,37,27,5,-17,-24,-19,-30,-46,-27,9,2,-23,-16,7,9,0,-12,-34,-52,-53,-45,-42,-29,7,43,42,18,4,29,70,92,96,112,121,81,12,-37,-50,-60,-56,-31,-11,-7 //ppg bell
		},
		{
			35,-27,-1,-49,-125,41,49,-22,62,48,11,53,-72,-18,97,-49,-72,-12,-55,-2,6,-27,107,66,-33,20,-5,6,49,-83,-46,47,-77,-80,42,35,67,23,-25,67,20,-51,13,-4,-32,1,-112,-46,83,2,-6,76,25,32,-10,-49,55,22,-83,-39,-38,-27,29,-36,35,122,0,-41,41,3,19,-7,-66,-15,-6,-82,-30,31,58,74,-15,-15,88,-4,-66,41,1,-43,-31,-100,-29,83,-2,27,61,14,43,-31,-64,103,9,-107,-11,-53,-40,32,-34,53,127,-21,-16,21,-18,58,-18,-90,32,-27,-112,3,28,50,93,-37,3,81,-37,-35  //mss chord
		},
		{
			47,106,127,125,116,113,116,119,117,115,114,115,106,71,11,-59,-108,-126,-127,-124,-122,-117,-108,-99,-97,-104,-112,-100,-59,3,65,103,117,119,115,104,87,68,61,69,89,104,92,47,-11,-65,-95,-102,-96,-80,-59,-39,-27,-34,-58,-88,-106,-88,-42,9,50,69,69,56,30,4,-11,-8,16,54,91,106,83,39,-1,-28,-32,-19,3,29,46,49,32,-6,-54,-94,-105,-81,-47,-21,-14,-25,-45,-65,-79,-81,-71,-41,16,79,116,117,91,65,53,59,80,101,114,118,110,86,32,-39,-97,-124,-117,-96,-85,-88,-103,-118,-125,-126,-123,-111,-81,-25  //sine overtones
		},
		{
			5,17,28,39,51,61,72,83,94,96,-20,-6,5,16,-79,-93,-80,-69,-56,-44,-32,-21,-9,2,13,24,36,47,58,68,80,-18,-31,-19,-7,3,14,26,38,22,-74,-61,-48,-37,-26,-13,-1,9,21,32,43,53,10,-56,-44,-33,-21,-9,1,12,24,36,46,57,68,-8,-42,-30,-17,-6,4,16,28,32,-84,-71,-58,-47,-36,-23,-11,0,11,23,34,44,56,67,77,87,92,-24,-12,-1,10,-83,-99,-86,-73,-61,-50,-37,-25,-14,-3,8,20,31,41,53,64,75,86,97,107,116,24,-128,-115,-103,-90,-77,-65,-54,-41,-29,-18,-7  //mss saw thirds
		}
	}
};



#endif /* ATEOSCOSCILLATORPROGMEM_H_ */