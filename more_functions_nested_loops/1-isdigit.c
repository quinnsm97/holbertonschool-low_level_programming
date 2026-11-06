#include "main.h"

/**
  * _isdigit - checks for a digit (0 - 9)
  * @c: int to check
  *
  * Return: 1 if c is a digit else 0
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
