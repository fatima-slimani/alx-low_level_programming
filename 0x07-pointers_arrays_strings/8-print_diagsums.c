#include "main.h"
/**
 * print_diagsums - this prints the sums of
 * the two diagonals of a square matrix
 *
 * @a: pointer to start of matrix
 * @size: width of matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, first_sum = 0, second_sum = 0;

	for (i = 0; i < size; i++)
	{
		first_sum += *(a + i * size + i);
		second_sum += *(a + i * size + size - 1 - i);
	}
	printf("%i, %i\n", first_sum, second_sum);
}
