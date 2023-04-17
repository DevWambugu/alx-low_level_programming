#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
*new_dog - creates a new dog
*@age: age of dog
*@owner: owner of the dog
*@name: name of new dog
*
*Return: return a pointer to new_dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_length = 0;
	int i = 0;
	int j = 0;
	int owner_len = 0;
	dog_t *new_dog_pointer;

	new_dog_pointer = malloc(sizeof(dog_t));
	if (new_dog_pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{
		name_length++;
	}
	for (j = 0; owner[j]; j++)
	{
		owner_len++;
	}
	new_dog_pointer->name = malloc(name_length * sizeof(new_dog_pointer->name));
	if (new_dog_pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < name_length; i++)
	{
		(new_dog_pointer->name)[i] = name[i];
	}
	new_dog_pointer->age = age;
	new_dog_pointer->owner = malloc(owner_len * sizeof(new_dog_pointer->owner));
	if (new_dog_pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < owner_len; i++)
	{
		new_dog_pointer->owner[i] = owner[i];
	}
	return (new_dog_pointer);
}
