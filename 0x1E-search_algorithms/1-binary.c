#include "search_algos.h"

/**
 * binary_search - Entry point
 *
 * @array: Array to search
 * @size: Size of the array
 * @value: value to search
 * Return: Always EXIT_SUCCESS
*/
int binary_search(int *array, size_t size, int value)
{
size_t i, left, right, mid;

if (array == NULL)
{
return (-1);
}

left = 0;
right = size - 1;

while (left <= right)
{
printf("Searching in array: ");
for (i = left; i < right; i++)
{
printf("%d, ", array[i]);
}
printf("%d\n", array[i]);
mid = (left + right) / 2;
if (array[mid] < value)
{
left = mid + 1;
}
else if (array[mid] > value)
{
right = mid - 1;
}
else
{
return (mid);
}
}
return (-1);
}
