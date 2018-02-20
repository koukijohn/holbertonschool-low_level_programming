#ifndef Germ
#define Germ

/**
 * struct dog - this will define a new type.
 * @name: This is the dogs name.
 * @age: This ios the dogs age.
 * @owner: This is the dogs owner.
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
