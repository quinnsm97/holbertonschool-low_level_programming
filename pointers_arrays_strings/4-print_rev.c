#include "main.h"

/**
  * print_rev - prints a string in reverse followed by a new line
  * @s: Pointer to the string being printed in reverse
  */

void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	while (length > 0)
	{
		s--;
		length--;
		_putchar(*s);
	}
	_putchar('\n');
}
