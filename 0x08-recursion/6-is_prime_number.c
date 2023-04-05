
#include "main.h"

/**
 * check - checks if is divider
 * @a: divisor
 * @b: dividend
 * Return: 1 if is divider else 0
 */
int check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
 * is_prime_number - check if number is prime
 * @n: the number to check if it's prime
 * Return: 1 if is prime else 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
