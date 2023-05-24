#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: pointer to the comparison function
 * Return: 0
 *
 * Description: This function searches for an integer in the given array
 * by applying the comparison function to each element. It
 * returns the index of the first element for which the
 * comparison function returns true. If no such element is
 * found, or if the array or comparison function is NULL, it
 * returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array && size && cmp)
while (i < size)

{
if (cmp(array[i]))
return (i);
i++;
}
return (-1);
}
