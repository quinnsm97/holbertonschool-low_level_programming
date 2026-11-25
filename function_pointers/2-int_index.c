#include "function_pointers.h"
#include <stdlib.h>

/**
  * int_index - searches for an integer
  * @array: array to be searched
  * @size: number of elements in array
  * @cmp: pointer to comparitive function
  *
  * Return: the index of the first match found with cmp,
  * -1 if no element matches or if size <= 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 1)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
