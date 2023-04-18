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
		if (d->age == -1.0)
		{
			printf("Age: 0.000000");
		}
		else
		{
			printf("Age: %f\n", d->age);
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
