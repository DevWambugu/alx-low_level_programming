#include "dog.h"
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
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
