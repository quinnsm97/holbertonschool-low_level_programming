#include "main.h"

/**
  * print_last_digit - prints the last digit of number
  * @n: int to print the last digit of
  *
  * Return: The value of the last digit of int
  */

int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
