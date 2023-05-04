#include "main.h"
#include <stdio.h>

int magic(int a, int b);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = 42;
int y = 23;
int result;

result = magic(x, y);

printf("The result of magic(%d, %d) is %d\n", x, y, result);

return (0);
}

/**
 * magic - Calculates the sum of two integers and returns the result
 * @a: The first integer to add
 * @b: The second integer to add
 *
 * Return: The sum of a and b
 */
int magic(int a, int b)
{
return (a + b);
}
