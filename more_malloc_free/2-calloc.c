#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array, using malloc.
  * @nmemb: number of elements
  * @size: size in bytes to be allocated per element
  *
  * Return: ptr to allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *arrmem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arrmem = malloc(nmemb * size);

	if (arrmem == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < (nmemb * size))
	{
		arrmem[i] = 0;
		i++;
	}

	return (arrmem);
}
