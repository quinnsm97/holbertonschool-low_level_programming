#include "void print_alphabet(void)"

/**
  * print alphabet - prints the lowercase alphabet then a new line
  *
  * Returns : 0
  */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	putchar('\n');

		return (0);
}
