#include "main.h"

/**
 * factorial - Calculates the factorial of a non-negative integer.
 * @n: The number to calculate the factorial of.
 *
 * This function takes a non-negative integer and calculates its factorial.
 * It works by recursively multiplying the number by the factorial of the
 * previous number until it reaches 1.
 *
 * Return: The factorial of n, or -1 if n is negative.
 */
int factorial(int n)
{	/* If n is negative, return -1 */
if (n < 0)
return (-1);

/* If n is 0, the factorial is 1 */
if (n == 0)
return (1);

/* Recursively calculate the factorial */
return (n * factorial(n - 1));
}
