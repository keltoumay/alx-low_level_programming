#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The value to raise.
 * @y: The power to raise x to.
 *
 * This function takes a base value x and a power value y, and calculates the
 * result of x raised to the power of y using recursion. It works by recursively
 * multiplying x by itself y - 1 times until y equals 0, at which point the
 * function returns 1.
 *
 * Return: The result of x raised to the power of y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
/* If y is negative, return -1 */
if (y < 0)
return (-1);

/* If y is 0, the result is 1 */
if (y == 0)
return (1);
/* Recursively calculate the result */
return (x * _pow_recursion(x, y - 1));
}
