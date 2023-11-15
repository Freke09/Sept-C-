#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* new_dog - a function that creates a new dog
* @name: the dog's name
* @age: the dog's age
* @owner: the owner's name
* Return: pointer to a new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int a = 0, b = 0, c;
	dog_t *newdog;

	while (name[a] != '\0')
		a++;

	while (owner[b] != '\0')
		b++;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(a * sizeof(newdog->name));
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
		newdog->name[c] = name[c];
	newdog->age = age;
	newdog->owner = malloc(b * sizeof(newdog->owner));
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (c = 0; c <= b; c++)
		newdog->owner[c] = owner[c];
	return (newdog);
}
