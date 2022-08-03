#include "dog.h"

/**
 * init_dog - Custom Data Structure for Dog data
 * @d: Dog record to be initialized
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Custom Data Structure created to store Dog data
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
