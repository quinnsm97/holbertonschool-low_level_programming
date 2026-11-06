#include <stdio.h>

/**
  * print_to_98 - prints all integers from n to 98, followed by a new line.
  * @n: integer from which to begin the printed count
  */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d", n);
	printf("\n");
}
