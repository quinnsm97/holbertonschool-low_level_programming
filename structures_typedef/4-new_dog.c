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
	int j;
	char *newstr;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	newstr = malloc(sizeof(char) * (i + 1));

	for (i = 0; str[i] != '\0'; i++)
	{
		newstr[i] = str[i];
	}
	newstr[i] = str[i];

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
	newdog->name = copy_string(name);
	newdog->age = age;
	newdog->owner = copy_string(owner);
	return (newdog);
}
