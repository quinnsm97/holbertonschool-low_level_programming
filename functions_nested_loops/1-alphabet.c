#include "main.h"

/**
  * print_alphabet - prints the lowercase alphabet then a new line
  *
  * Description: prints the lowercase alphabet then a new line
  *
  * Returns: void
  */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
