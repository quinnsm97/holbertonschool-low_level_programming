#include "main.h"

/**
  * _strspn - gets the length of a prefix substring.
  * @s: initial segment
  * @accept: bytes to retrieve from
  *
  * Return: number of bytes accepted
  */
unsigned int my_strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}

		if (accept[j] == '\0')
	{
		return (count);
	}

		j = 0;
		i++;
	}

	return (count);
}
