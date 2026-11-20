#include <stdio.h>
#include "main.h"

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
* @a: pointer to an array
* @size: the size of the matrix
*/

void print_diagsums(int *a, int size)
{
	int row;
	int sum1;
	int sum2;

	row = 0;
	sum1 = 0;
	sum2 = 0;

	while (row < size)
	{
		sum1 += a[row * size + row];
		sum2 += a[row * size + (size - 1 - row)];
		row++;
	}

	printf("%d, %d\n", sum1, sum2);
}
