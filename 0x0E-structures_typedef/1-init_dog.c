#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to struct type dog
 * @name: pointer to char dog's name
 * @age: dog's age
 * @owner: pointer to char dog's owner
 * Return: nothing
 * author: tuneday
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
