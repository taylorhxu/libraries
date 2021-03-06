//OdyFilter.h  Odytron filter calc variables.  All processing done in Ody.cpp
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


#ifndef __ODYFILTER_H__
#define __ODYFILTER_H__

#include "SsHelpers.h"
#include <math.h>

class OdyFilter
{
//variables
public:
	enum FiltType : unsigned char
	{
		OFF,
		MOZZI,
		SIMPLE,
		KARLSEN  //karlsen nearly same as mozzi, so we'll abandon this
	};
	enum FiltFmASource : unsigned char
	{
		S_AND_H,
		SINE
	};
	enum FiltFmBSource : unsigned char
	{
		ADSR,
		AR
	};
protected:
private:
	static const unsigned int TWOPI_SCALED = 804;  //2 * pi * 128
	static const unsigned int SF = 15625; //F_CPU / 256 / 4
	static const unsigned char SCALE = 7;
	unsigned char fc_ = 255;
	unsigned char q_;
	FiltType type_ = OFF;
	unsigned char fmAAmount_ = 0;  //0-15
	unsigned char fmBAmount_ = 0;  //0-15
	unsigned char kbrdAmount_ = 0;  //0-15
	unsigned char kbrd_ = 0;
	FiltFmASource fmASource_ = S_AND_H;
	FiltFmBSource fmBSource_ = ADSR;
	char c_ = 0;
	char rcScaled_ = 0;
//functions
public:
	OdyFilter();
	~OdyFilter();
	void setFc(unsigned char newFc){fc_ = newFc;}
	unsigned char getFc(){return fc_;}
	void setQ(unsigned char newQ){q_ = newQ;}
	unsigned char getQ(){return q_;}
	void setType(FiltType newType){type_ = newType;}
	FiltType getType(){return type_;}
	void setKybrdAmount(unsigned char newAmt){kbrdAmount_ = newAmt;}
	unsigned char getKybrdAmount(){return kbrdAmount_;}
	void setFmAAmount(unsigned char newAmt){fmAAmount_ = newAmt;}
	unsigned char getFmAAmount(){return fmAAmount_;}
	void setFmBAmount(unsigned char newAmt){fmBAmount_ = newAmt;}
	unsigned char getFmBAmount(){return fmBAmount_;}
	void setFmASource(FiltFmASource sineWave){fmASource_ = sineWave;}
	FiltFmASource getFmASource(){return fmASource_;}
	void setFmBSource(FiltFmBSource arEnv){fmBSource_ = arEnv;}
	FiltFmBSource getFmBSource(){return fmBSource_;}	
	void refresh(unsigned char kbrd, char fmA, char fmB);
	char getCscaled(){return c_;}
	char getRCscaled(){return rcScaled_;}
protected:
private:
	OdyFilter( const OdyFilter &c );
	OdyFilter& operator=( const OdyFilter &c );

}; //OdyFilter

#endif //__ODYFILTER_H__
