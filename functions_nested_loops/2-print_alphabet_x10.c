#include "main.h"

/**
  * print_alphabet_x10 - prints the alphabet x10 in lowercase then a new line
  */

void print_alphabet_x10(void)
{
	int count = 0;
	int i;

	while (count < 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		count++;
	}
}
