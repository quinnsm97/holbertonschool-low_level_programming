#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
  * new_dog - creates a new dog
  * @name: pointer to name
  * @age: age of dog
  * @owner: pointer to owner string
  *
  * Return: a new dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *newname;
	char *newowner;
	int i = 0;
	int j = 0;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	while (name[i] != '\0')
	{
		i++;
	}
	while (owner[j] != '\0')
	{
		j++;
	}
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}
	newname = malloc(sizeof(char) * (i + 1));
	if (newname == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newowner = malloc(sizeof(char) * (j + 1));
	if (newowner == NULL)
	{
		free(newname);
		free(newdog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		newname[i] = name[i];
	}
	newname[i] = name[i];
	for (i = 0; owner[i] != '\0'; i++)
	{
		newowner[i] = owner[i];
	}
	newowner[i] = owner[i];
	newdog->name = newname;
	newdog->age = age;
	newdog->owner = newowner;

	return (newdog);
}
