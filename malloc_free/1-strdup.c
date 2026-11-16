#include "main.h"
#include <stdlib.h>

/**
  * *_strdup - returns a pointer to new memory that has a copy of the para str
  * @str: string to be copied
  *
  * Return: pointer to new memory space with string or null if null
  */

char *_strdup(char *str)
{
	int i = 0;
	char *new_s;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	new_s = malloc(sizeof(char) * (i + 1));

	if (new_s == NULL)
	{
		return (NULL);
	}

	while (j <= i)
	{
		new_s[j] = str[j];
		j++;
	}

	return (new_s);
}
