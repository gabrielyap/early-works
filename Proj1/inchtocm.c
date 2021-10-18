/*
 * Gabriel Yap
 * 917175659
 * File: inchtocm.c
 * ----------------
 *  This program reads in a length given in inches and converts it
 *  to its metric equivalent in centimeters.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main()
{
	double feet, inch, cm;
	printf("This program converts from feet and inches to centimeters.\n");
	printf("Number of feet? ");
	feet = GetReal();
	printf("Number of inches? ");
	inch = GetReal();
	cm = (inch * 2.54) + (feet * 12 * 2.54);
	printf("The corresponding length is %g cm.\n", cm);
	return(0);	
}

