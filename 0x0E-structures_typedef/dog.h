#ifndef DOG_H
#define DOG_H
/**
*struct dog - contains char and float data types
*@name:char datatype
*@age: int datatype
*@owner:char datatype
*
*Description: the stuct contains the above elements
*/
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
#endif
