#include <stdio.h>

/**
  * main - prints the alphabet except for q and e
  *
  * Return: 0
  */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;

		}
		else
		{
			putchar(i);
		}
	}

	putchar('\n');

	return (0);
}
