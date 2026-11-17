#include "main.h"
#include <stdlib.h>

/**
  * *str_concat - concatenates 2 strings
  * @s1: first string
  * @s2: second string
  *
  * Return: Concatenated string or null on failure.
  */

char *str_concat(char *s1, char *s2)
{
	char *cats;
	int l1 = 0;
	int l2 = 0;
	int i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}
	cats = malloc(sizeof(char) * (l1 + l2 + 1));

	if (cats == NULL)
	{
		return (NULL);
	}
	while (i < l1)
	{
		cats[i] = s1[i];
		i++;
	}

	for (i = 0; i <= l2; i++)
	{
		cats[l1 + i] = s2[i];
	}

	return (cats);
}
