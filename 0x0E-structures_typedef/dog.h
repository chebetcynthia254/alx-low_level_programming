#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a dog's basic info
 * @name: name of a dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
