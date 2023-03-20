#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Program frees memory  of struct dog
 * @d: free struct dog
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
