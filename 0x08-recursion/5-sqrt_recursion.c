
#include "main.h"

/**
 * find_sqrt - looks for the square root
 * @n:int
 * @m:int
 *
 * Return: square root of n or -1
 */
int find_sqrt(int n, int m)
{
	if (m * m == n)
		return (m);
	if (m * m > n)
		return (-1);
	return (find_sqrt(m + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of m number
 * @n: the number to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (find_sqrt(n, 1));
}
