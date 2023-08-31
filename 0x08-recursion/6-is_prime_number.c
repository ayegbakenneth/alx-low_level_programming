#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - This indicate a prime number
 * @n: The evaluated number
 * Return: 1 for prime, 0 others.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - if a number is recursive
 * @n: Evaluated number
 * @i: Counter
 * Return: 1 for prime and 0 for others
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
