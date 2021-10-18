/*
 * Gabriel Yap
 * 917175659
 * File: factorization.c
 * -----------------------------
 * This file displays the prime
 * factorization of a number.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "math.h"

int main()
{
	int num, origNum;
	char display;
	printf("Enter number to be factored: ");
	num = GetInteger();
	origNum = num;
	while (num % 2 == 0)
	{
		printf("2 * ");
		num /= 2;
	}
	for (int i = 3; i < sqrt(origNum); i++)
	{
		while (num % i == 0)
		{
			if(num == i)
			{
				printf("%d\n", i);
				num /= i;
			}
			else
			{
				printf("%d * ", i);
				num /= i;
			}
		}
	}
	if (num > 2)
	{
		printf("%d\n", num);
	}
}
