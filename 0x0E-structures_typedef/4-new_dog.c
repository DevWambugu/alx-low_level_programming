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
	int owner_len = 0;
	dog_t *new_dog_p;

	new_dog_p = malloc(sizeof(dog_t));
	if (new_dog_p == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{
		name_length++;
	}
	for (i = 0; owner[i]; i++)
	{
		owner_len++;
	}
	new_dog_p->name = malloc((name_length + 1) * sizeof(char));
	if (new_dog_p->name == NULL)
	{
		free(new_dog_p->name);
		return (NULL);
	}
	for (i = 0; i < name_length; i++)
	{
		(new_dog_p->name)[i] = name[i];
	}
	new_dog_p->age = age;
	new_dog_p->owner = malloc((owner_len + 1) * sizeof(char));
	if (new_dog_p->owner == NULL)
	{
		free(new_dog_p->owner);
		return (NULL);
	}
	for (i = 0; i < owner_len; i++)
	{
		new_dog_p->owner[i] = owner[i];
	}
	return (new_dog_p);
}
