#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int negative = 0;
	int result = 0;
	int digit;

	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			negative++;
		}
		i++;
	}

	if (s[i] == '\0')
	{
		return (0);
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';

		if (result > (2147483647 - digit) / 10)
		{
			return (0);
		}

		result = result * 10 + digit;
		i++;
	}

	if (negative % 2 != 0)
	{
		result = -result;
	}

	return (result);
}
