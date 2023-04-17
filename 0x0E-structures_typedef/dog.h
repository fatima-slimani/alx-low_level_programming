#ifndef DOG
#define DOG

/**
 * struct dog - a dog's basic info
 *
 * @name: the dog's name
 *
 * @age: the dog's age
 *
 * @owner: the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);

#endif
