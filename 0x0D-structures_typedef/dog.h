#ifndef Germ
#define Germ

/**
 * struct dog - this will define a new type.
 * @name: This is the dogs name.
 * @age: This ios the dogs age.
 * @owner: This is the dogs owner.
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
