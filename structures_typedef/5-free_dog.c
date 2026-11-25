#include "main.h"
#include <stdlib.h>

/**
  * free_dog - frees a dog struct
  * @d: dog to be freed
  */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->owner);
	free(d->name);
	free(d);
}
