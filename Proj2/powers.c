/*
 * Gabriel Yap
 * 917175659
 * File: powers.c
 * ---------------
 *  This program has a function that takes a floating value
 *  and integer nd returns a table of values of 10 to the
 *  integer.
 */

#include <stdio.h>
#include "simpio.h"
#include "math.h"
#include "genlib.h"

float RaiseRealToPower(float x, int k)
{
	if (k >= 0)
	{
		float val =  pow(x, k);
		return val;
	}
	if (k < 0)
	{
		double val = (1 / (pow(x, -k)));
		return val;
	}
}

int main()
{
	printf("           k\n");
	printf(" k       10\n");
        printf("--------------\n");
	for (int i = -4; i <= 4; i++)
	{	
		float x = RaiseRealToPower(10, i);
		if (i < 0)
		{
			printf("%2d      %.*f\n", i, -i, x); 
		}
		else
		{
			printf("%2d %8.1f\n", i, x);
		}
	}
}
