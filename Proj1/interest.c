/*
 * Gabriel Yap
 * 917175659
 * File: interest.c
 * ------------------
 *  This program displays an account's balance after
 *  a year given an interest rate and initial balance.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main()
{
	double start, rate, final;
	printf("Interest calculation program.\n");
	printf("Starting balance? ");
	start = GetReal();
	printf("Annual interest rate percentage? ");
	rate = GetReal();
	final = start * (1 + (rate / 100));
	printf("Balance after one year: %g\n", final);
	return(0);
	
}
