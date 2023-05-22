#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - frees memory allocated for a struct dog
 *@d: struct dog to free
 *Description: This function releases the memory allocated for a struct dog,
 *including the name and owner strings, and the struct itself.
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
