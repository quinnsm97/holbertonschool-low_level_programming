#include "main.h"
#include <stddef.h>

/**
  * print_dog - prints a struct dog
  * @d: pointer to struct dog
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	} else if (d->name == NULL)
	{
		printf("Name: (ni)l\n");
	}

	printf("Age: %f\n", d->age);

	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	} else if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
}
