/*
 * Gabriel Yap
 * 917175659
 * File: quadratics.c
 * --------------------
 *  This program takes an a, b, and c input and
 *  calculates the quadratic equation given these variables.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "math.h"

int main()
{
	int a, b, c;
	double x1, x2;
	double quan;
	printf("Enter coefficients for the quadratic equation:\n");
	printf("a: ");
	a = GetInteger();
	printf("b: ");
	b = GetInteger();
	printf("c: ");
	c = GetInteger();
	quan = b*b - (4 * a * c);
	if (quan < 0)
	{
		printf("The equation has no real solutions.\n");
		exit(0);
	}
	x1 = (-b + sqrt(b*b - 4 * a * c)) / (2 * a);
	x2 = (-b - sqrt(b*b - 4 * a * c)) / (2 * a);
	if (x1 == x2)
	{
		printf("The only solution is %g\n", x1);
		exit(0);
	}
	printf("The first solution is %g\n", x1);
	printf("The second solution is %g\n", x2);

}
