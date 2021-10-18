/* Gabriel Yap
 * 917175659
 *
 * File: indexarray.c
 * -------------------
 *  Function that returns pointer to
 *  a dynamic integer array
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int* IndexArray(int n)
{
	int *ary = malloc(n * sizeof(n));
	for (int i = 0; i < n; i++)
	{
		ary[i] = i;
	}
	return ary;	
}

int main()
{
	int size;
	printf("Please enter the size of the array: ");
	size = GetInteger();
	int *ip = IndexArray(size);
	printf("The resulting array is:\n");
	for (int i = 0; i < size; i++)
	{
		if(i ==  size - 1)
		{
			printf("%d\n", ip[i]);
		}
		else
		{
			printf("%d, ", ip[i]);
		}
	}
}

