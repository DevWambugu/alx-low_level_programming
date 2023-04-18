#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
*print_dog - prints struct dog
*@d: pointer to variables struct d
*
*Returns: this is a void function
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: nil\n");
		}
		else
		{
			printf("Name: %s\n", (*d).name);
		}
		if (d->age)
		{
			printf("Age: %f\n", (*d).age);
		}
		else
		{
			printf("Age: %f\n")
		}
		if (d->owner == NULL)
		{
			printf("Owner: nil\n");
		}
		else
		{
			printf("Owner: %s\n", (*d).owner);
		}
	}
}
