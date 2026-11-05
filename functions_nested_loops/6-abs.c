#include "main.h"

/**
  * _abs - Computes the absolute value of an integer
  * @n: Integer to be calculated
  *
  * Return: Absolute value of int.
  */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
