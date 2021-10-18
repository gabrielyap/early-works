/*
 * Gabriel Yap 917175659
 * File: average.c
 * ----------------
 *  This program displays the average of entered values
 *  until the user has entered -1
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "math.h"

int main()
{
	int num, count, sum;
	double avg;
	sum = 0;
	count = 0;
	printf("This program averages a list of integers.\n");
	printf("Enter -1 to signal the end of the list.\n");
	printf(" ? ");
	num = GetInteger();
	while(num != -1)
	{
		sum += num;
		count += 1;
		printf(" ? ");
		num = GetInteger();
	}	
	avg = (double)sum / count;
	printf("The average is %g\n", avg);
	return(0);
}
