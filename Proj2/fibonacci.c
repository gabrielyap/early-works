/*
 * Gabriel Yap
 * 917175659
 * File: fibonacci.c
 * ---------------------
 *  This program lists the Fibonacci sequence
 *  from 0 to 15
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main()
{
	int sum, n1, n2;
	sum = 0;
	n1 = 0;
	n2 = 1;
	for(int i = 0; i <= 15; i++)
	{
		if(i < 10)
		{
			printf(" F(%d) = %4d\n", i, sum);
		}
		else
		{
			printf("F(%d) = %4d\n", i, sum);
		}
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
	}
	return(0);
}
