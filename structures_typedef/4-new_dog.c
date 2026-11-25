#include "main.h"
#include <stdlib.h>

/**
  * copy_string - copys a string into a new ptr
  * @str: string to be copied
  *
  * Return: pointer to copied string
  */

char *copy_string(char *str)
{
	int i;
	char *newstr;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	newstr = malloc(sizeof(char) * (i + 1));
	if (newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		newstr[i] = str[i];
	}
	newstr[i] = '\0';

	return (newstr);
}

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

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = copy_string(name);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->age = age;
	newdog->owner = copy_string(owner);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	return (newdog);
}
