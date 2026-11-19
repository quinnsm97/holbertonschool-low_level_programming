#include "main.h"

/**
  * leet - encodes a string into 1337
  * @str: string to encode
  *
  * Return: encoded string
  */

char *leet(char *str)
{
	int strcount;
	int arrcount;
	char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	strcount = 0;

	while (str[strcount] != '\0')
	{
		arrcount = 0;

		while (arrcount < 10)
		{
			if (str[strcount] == letters[arrcount])
			{
				str[strcount] = numbers[arrcount];
				break;
			}
			arrcount++;
		}
		strcount++;
	}

	return (str);
}
