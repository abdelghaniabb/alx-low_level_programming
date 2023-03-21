#ifndef ght
#define ght
/**
 * struct dog - jj
 * @name: name variable
 * @age: var2
 * @owner: name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
