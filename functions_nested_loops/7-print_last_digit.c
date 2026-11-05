#include "main.h"

/**
  * print_last_digit - prints the last digit of number
  * @n: int to print the last digit of
  *
  * Return: The value of the last digit of int
  */

int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	{
		i = -i;
	}

	_putchar(i + '0');
	return (i);
}
