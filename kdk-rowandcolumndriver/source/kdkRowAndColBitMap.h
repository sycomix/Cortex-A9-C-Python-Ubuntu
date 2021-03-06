/*****************************************************************************
*
* kdkRowAndColBitMap.h
*
* Header file containing bit mapping values specific to the KDK controller
* board.  This file contains constant variable declarations.  These variables
* are used by library functions used to interface to the KDK board.
*
* Copyright 2015 Kymeta Corporation - All rights reserved.
*
* www.kymetacorp.com
* 12277 134th Ct. NE, Suite 100
* Redmond, WA 98052
*
* Original code by Shawn Quinn
* squinn@kymetacorp.com
* Created Date:  06/18/2015
*
*****************************************************************************/

#ifndef KDKROWANDCOLBITMAP_H
#define KDKROWANDCOLBITMAP_H

// byte starting bit position by column, even -> byte1 = 8, odd -> byte3 = 24
const uint8_t byteStartingBitValuesByColumn[] =
{	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
	24,
	8,
};

// bit shift value by column
const uint8_t bitShiftValueByColumn[] =
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	5,
	5,
	5,
	5,
	5,
	5,
	5,
	5,
	5,
	5,
	5,
	5,
	5,
	5,
	5,
	5,
	5,
	5,
	5,
	5,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	6,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
	7,
};

// byte offset value by column
const uint8_t byteOffsetsByColumn[] =
{
	9,
	9,
	8,
	8,
	7,
	7,
	6,
	6,
	5,
	5,
	4,
	4,
	3,
	3,
	2,
	2,
	1,
	1,
	0,
	0,
	9,
	9,
	8,
	8,
	7,
	7,
	6,
	6,
	5,
	5,
	4,
	4,
	3,
	3,
	2,
	2,
	1,
	1,
	0,
	0,
	9,
	9,
	8,
	8,
	7,
	7,
	6,
	6,
	5,
	5,
	4,
	4,
	3,
	3,
	2,
	2,
	1,
	1,
	0,
	0,
	9,
	9,
	8,
	8,
	7,
	7,
	6,
	6,
	5,
	5,
	4,
	4,
	3,
	3,
	2,
	2,
	1,
	1,
	0,
	0,
	9,
	9,
	8,
	8,
	7,
	7,
	6,
	6,
	5,
	5,
	4,
	4,
	3,
	3,
	2,
	2,
	1,
	1,
	0,
	0,
	9,
	9,
	8,
	8,
	7,
	7,
	6,
	6,
	5,
	5,
	4,
	4,
	3,
	3,
	2,
	2,
	1,
	1,
	0,
	0,
	9,
	9,
	8,
	8,
	7,
	7,
	6,
	6,
	5,
	5,
	4,
	4,
	3,
	3,
	2,
	2,
	1,
	1,
	0,
	0,
	9,
	9,
	8,
	8,
	7,
	7,
	6,
	6,
	5,
	5,
	4,
	4,
	3,
	3,
	2,
	2,
	1,
	1,
	0,
	0,
};

#endif
