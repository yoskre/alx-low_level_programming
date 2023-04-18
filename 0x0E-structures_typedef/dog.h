#ifndef DOG_H
#define DOG_H

/**
 * struct dog - doggo!
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: it's a doggo!
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
