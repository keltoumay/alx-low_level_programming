#include <stdlib.h>
#include "main.h"


/*
 * The following function allocates memory using malloc.
 * It takes in a parameter @b which specifies the number of bytes to allocate.
 * The function returns a pointer to the allocated memory.
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
