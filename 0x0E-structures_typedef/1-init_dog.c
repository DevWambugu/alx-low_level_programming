#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
*init_dog - initializes a variable of type struct dog
*@name: char datatype
*@age: float datatype
*@owner: char datatype
*@d: pointer to a variable of type struct d
*
*Return: this is a void function
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
