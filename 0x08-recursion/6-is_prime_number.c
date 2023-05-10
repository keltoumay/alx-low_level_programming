#include "main.h"

int recursive_prime(int n, int i);

/**
 * is_prime_number - Determines if an integer is a prime number.
 * @n: The integer to evaluate.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (recursive_prime(n, n - 1));
}

/**
 * recursive_prime - Recursively checks if a number is prime.
 * @n: The number to evaluate.
 * @i: The current divisor to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int recursive_prime(int n, int i)
{
/* The algorithm checks if n is divisible by i.
 * If it is, then n is not a prime number.
 * If it is not, then it checks the next number less than i.
 * If all numbers less than i have been checked, then n is prime.
 */

	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (recursive_prime(n, i - 1));
}
