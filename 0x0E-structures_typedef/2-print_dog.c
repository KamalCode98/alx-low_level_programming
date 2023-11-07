#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints struct dog details
 * @d: A pointer to a struct dog
 *
 * Description: This function prints struct dog elements:
 * name, age, and owner. It
 * replaces NULL elements with "(nil)." If d is NULL, nothing is printed.
 *
 * Prototype: void print_dog(struct dog *d);
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", (d->name ? d->name : "(nil)"));
	printf("Age: %f\n", (d->age ? d->age : 0));
	printf("Owner: %s\n", (d->owner ? d->owner : "(nil)"));
	}
}
