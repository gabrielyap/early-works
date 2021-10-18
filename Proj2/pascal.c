/*
 * Gabriel Yap
 * 917175659
 * File: pascal.c
 * ----------------
 *  This program displays the first
 *  eight rows of Pascal's triangle.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "math.h"

int Factorial(int c)
{
	if (c == 0)
	{
		return(1);
	}
	int product, i;
	product = 1;
	for (i = 1; i <= c; i++)
	{
		product *= i;
	}
	return(product);
}
int Combinations(int a, int b)
{	
	if(b == 0)
	{
		return(1);
	}
	if(a == b)
	{
		return(1);
	}
	return (Factorial(a) / (Factorial(b) * Factorial(a - b)));
}
int main()
{
	for(int i = 0; i < 8; i++)
	{
		int count = 0;
		while (count <= i)
		{
			if (count == 0)//first term
			{
				printf("%*d", (18 - (i * 2)), Combinations(i, count));
			}
			else if (count == i)//last term
			{
				printf("   %d", Combinations(i, count));
			}
			else if (count == 1)//second term
			{
				printf("   %d", Combinations(i, count));
			}
			else if (count == i - 1)//second to last term
			{
				printf(" %d", Combinations(i, count));
			}
			else//everything in the middle
			{
				printf("  %d", Combinations(i , count));
			}
			count++;
		}
		printf("\n");
	}
}
