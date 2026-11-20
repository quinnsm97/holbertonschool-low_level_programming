#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: lowest int in array
  * @max: highest int in array
  *
  * Return: ptr to new array
  */

int *array_range(int min, int max)
{
	int *intarr;
	int i;
	int num;

	if (min > max)
	{
		return (NULL);
	}

	intarr = malloc(sizeof(int) * (max - min + 1));

	if (intarr == NULL)
	{
		return (NULL);
	}

	i = 0;
	num = min;

	while (i < (max - min + 1))
	{
		intarr[i] = num;
		i++;
		num++;
	}

	return (intarr);
}
