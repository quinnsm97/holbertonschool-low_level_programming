#include "main.h"

/**
  * _islower - checks for a lowercase character
  *
  * @c: accepts an integer named c
  *
  * Return: 1 if true, 0 if false
  */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
