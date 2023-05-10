#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * This function takes a non-negative integer n and recursively calculates its
 * natural square root. It works by recursively increasing the value of i and
 * checking if i * i is equal to n, until it finds the natural square root or
 * determines that there is no natural square root.
 *
 * Return: The natural square root of n, or -1 if n is negative or has no
 * * natural square root.
 */
int _sqrt_recursion(int n)
{
	/* If n is negative, return -1 */
	if (n < 0)
		return (-1);

	/* Call the actual_sqrt_recursion function with initial i value of 0 */
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Recursively calculates the natural square root of a
 * number.
 * @n: The number to calculate the square root of.
 * @i: The current iterator value.
 *
 * This function is called by _sqrt_recursion and recursively calculates the
 * natural square root of n. It works by checking if i * i is greater than n,
 * in which case there is no natural square root, or if i * i is equal to n, in
 * which case the function returns i. Otherwise, it recursively calls itself
 * with i incremented by 1.
 *
 * Return: The natural square root of n, or -1 if n has no natural square root.
 */
int actual_sqrt_recursion(int n, int i)
{
	/* If i * i is greater than n, there is no natural square root */
	if (i * i > n)
		return (-1);

	/* If i * i is equal to n, i is the natural square root */
	if (i * i == n)
		return (i);

	/* Recursively call the function with i incremented by 1 */
	return (actual_sqrt_recursion(n, i + 1));
}
