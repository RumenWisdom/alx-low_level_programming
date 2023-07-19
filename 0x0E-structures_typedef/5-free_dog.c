#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function will frees allocated memory
 *
 * @d: parameter to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
