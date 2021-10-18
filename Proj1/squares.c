/*
 * Gabriel Yap 917175659
 * File: squares.c
 * ------------------
 *  This program prints the squares of the numbers
 *  from 1 to 10.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "math.h"

int main()
{
	int sqr;
	for(int i = 1; i <= 10; i++)
	{
		sqr = pow(i, 2);
		printf("%d squared is %d\n", i, sqr); 
	}
	return(0);
}
