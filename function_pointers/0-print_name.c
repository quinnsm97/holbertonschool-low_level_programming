#include <stdlib.h>
#include "function_pointers.h"

/**
  * print_name - prints a name
  * @name: ptr to name to be printed
  * @f: ptr to function
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
