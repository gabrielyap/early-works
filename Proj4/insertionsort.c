/* Gabriel Yap
 * 917175659
 * File: insertionsort.c
 * -----------
 *  Implements an insertion sort algorithm
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <ctype.h>
#include <string.h>

void SortIntegerArray(int array[], int numElements)
{
        int tempFr, h;
        for(int i = 1; i < numElements; i++)
        {
                h = i - 1;
                tempFr = array[i];      //temporary, holding value in front
                while(tempFr < array[h] && h >= 0)
                {
                        array[h + 1] = array[h];
                        h -= 1;
                }
                array[h + 1] = tempFr;
        }

}

void printArray(int ary[], int numElements)
{
	for (int i = 0; i < numElements; i++)
        {
                if (i == numElements - 1)
                {
                        printf("%d\n", ary[i]);
                }
                else
                {
                        printf("%d, ", ary[i]);
                }
        }

}
int main()
{
	int count;
	int *ary = malloc(8 * sizeof(int));
	string s; 
	printf("Enter a list of integers\n");
	while(1)
	{	
		s = GetLine();
			if(strlen(s) < 1)	//if its just an enter it terminates
			{
				break;
			}

		ary[count] = atoi(s);	//atoi converts string to int
		count++;	//count also becomes the total number of elements - 1
	}
	//printing sequence
	printf("The input array is: ");
	printArray(ary, count);
	SortIntegerArray(ary, count);
	printf("The sorted array is: ");
	printArray(ary, count);
	
}

