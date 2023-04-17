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
void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
