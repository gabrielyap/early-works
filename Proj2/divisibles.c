/*
 * Gabriel Yap
 * 917175659
 * File: divisibles.c
 * -----------------------
 *  Displays all integers between 1 and 100 
 *  that are divisible by 6 or 7
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main()
{
	for(int i = 1; i <= 100; i++)
	{
		if(i % 6 == 0 || i % 7 == 0)
		{
			printf("%4d\n", i);
		}
	}
}
