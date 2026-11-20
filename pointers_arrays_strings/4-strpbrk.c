#include "main.h"

/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: string to be searched
  * @accept: string to validate with
  *
  * Return: pointer to first string match, or null if none found
  */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *newstr;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				newstr = &s[i];
				return (newstr);
			}
			j++;
		}
		i++;
	}
	return (0);
}
