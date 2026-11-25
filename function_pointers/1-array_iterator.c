#include "function_pointers.h"
#include <stddef.h>

/**
  * array_iterator - executes a given function on each element of an array
  * @size: size of the array
  * @action: pointer to function to execute on the array
  * @array: pointer to the array to be performed the function on
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
