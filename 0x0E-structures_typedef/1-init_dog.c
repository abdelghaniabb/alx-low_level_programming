#include "dog.h"
/**
 * init_dog - initialize a variable
 * @d: jj
 * @name: jj
 * @age: jj
 * @owner: jj
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
