#include "main.h"
#include <stdlib.h>

/**
  * *string_nconcat - concatenates a string with n bytes of another
  * @s1: first string
  * @s2: second string
  * @n: int, number of bytes of s2 to concatenate.
  *
  * Return: Concatenated string or null on failure.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cats;
	unsigned int l1 = 0;
	unsigned int l2 = 0;
	unsigned int i = 0;

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
	if (l2 <= n)
	{
		n = l2;
	}
	cats = malloc(sizeof(char) * l1 + n + 1);
	if (cats == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		cats[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		cats[l1 + i] = s2[i];
	}
	cats[l1 + i] = '\0';
	return (cats);
}
