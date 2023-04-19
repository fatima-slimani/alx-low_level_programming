#include "function_pointers.h"

/**
 * int_index -  searches for an integer in array.
 * @array: array to be searched in.
 * @size: the size of the array
 * @cmp: the equal function
 *
 * Return: the index of the number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
