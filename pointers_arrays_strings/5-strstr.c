#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the found substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;

		while (haystack[i + j] == needle[j] && needle[j] != '\0')
			j++;

		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	return (0);
}
