/*
 * Gabriel Yap
 * 917175659
 * File: piseries.c
 * --------------------
 *  This program approximates pi over 4 using
 *  the first 10,000 terms of a series.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "math.h"

int main()
{
	double total;
	for (int i = 1; i <= 10000; i++)
	{
		if(i % 2 == 1)
		{
			total += 1.0 / (i * 2 - 1);
		}
		if(i % 2 == 0)
		{
			total -= 1.0 / (i * 2 - 1);
		}
	}

	printf("The approximated value of pi is %12.10lf\n", (total * 4));	
}
