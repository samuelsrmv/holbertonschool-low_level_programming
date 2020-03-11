#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free_dog
 * @d: pointers
 * Return: Value
 * Description: Fuction
 */
void free_dog(dog_t *d);
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
