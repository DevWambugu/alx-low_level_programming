#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
*free_dog - frees dog
*@d: pointer to dog to be freed
*
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
