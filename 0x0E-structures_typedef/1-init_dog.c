#include "dog.h"

/**
 * init_dog - Entrypoint
 * @d: Struct
 * @name: char pointer
 * @age: Float value
 * @owner : the owner
 * Description: function that initialize a variable of type struct dog
 * Return:(void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;

		/**
		 * (*d).name = name;
		 * (*d).age = ange;
		 * (*d).owner = owner;
		 */
	}
}
