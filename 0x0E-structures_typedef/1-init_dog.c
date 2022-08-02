#include "dog.h"

/**
 * init_dog - Custom Data Structure for Dog data
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Custom Data Structure created to store Dog data
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog newDog;

	struct dog newDog =
	{
       		*d /*char *name;*/
		*name /*float age;*/
	        *owner;
	}
}
#endif /*#ifndef _DOG_H_*/
