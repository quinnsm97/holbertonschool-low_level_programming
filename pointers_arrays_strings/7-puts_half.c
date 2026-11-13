#include "main.h"

/**
  * puts_half - prints half of a string
  *
  * @str: pointer to the string being half printed
  */

void puts_half(char *str)
{
	int leng = 0;
	int i;

	while (str[leng] != '\0')
	{
		leng++;
	}
	i = leng / 2;

	if (leng % 2 != 0)
	{
		i++;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
