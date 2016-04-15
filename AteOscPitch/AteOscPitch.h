//AteOscPitch.h  Atmegatron Pitch class (calculate output frequency)
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

#ifndef __ATEOSCPITCH_H__
#define __ATEOSCPITCH_H__

#include <avr/pgmspace.h>
#include "AteOscPitchProgmem.h"

class AteOscPitch
{
//variables
public:
protected:
private:
	unsigned int input_ = 0;
	unsigned char fineOffset_ = 0;
	unsigned int coarseOffset_ = 0;
	bool topHalf_ = false;
//functions
public:
	AteOscPitch();
	~AteOscPitch();
	void setInput(unsigned int newInp){input_ = newInp;}
	unsigned int getOutput();
	unsigned int getFrequency();
	void setFineOffset(unsigned char newOffset){fineOffset_ = newOffset;}
	void setCoarseOffset(unsigned int newOffset){coarseOffset_ = newOffset;}
	void setTopHalf(bool newValue){topHalf_ = newValue;}
protected:
	AteOscPitch( const AteOscPitch &c );
	AteOscPitch& operator=( const AteOscPitch &c );
}; //AteOscPitch

#endif //__ATEOSCPITCH_H__