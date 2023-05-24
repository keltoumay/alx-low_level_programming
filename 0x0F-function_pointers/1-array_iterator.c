#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a given function on each element of an array
 * @array: array of integers
 * @size: number of elements in the array
 * @action: pointer to the function to be executed
 *
 * Description: This function takes an array of integers, the number of
 * elements in the array, and a pointer to a function that
 * accepts an integer argument. It checks if the array and
 * function pointer are not NULL, and then applies the given
 * function to each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
