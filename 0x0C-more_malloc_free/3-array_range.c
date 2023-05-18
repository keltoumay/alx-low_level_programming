#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
/** Declare a pointer variable to store the new array*/
int *ptr;
/** Declare variables for iteration, and size of the array*/
int i, size;

/** Check if the minimum value is greater than the maximum value*/
if (min > max)
return (NULL);

/*Calculate the size of the array based on the range of values*/
size = max - min + 1;

ptr = malloc(sizeof(int) * size);

if (ptr == NULL)
return (NULL);

for (i = 0; min <= max; i++)
ptr[i] = min++;

return (ptr);
}
