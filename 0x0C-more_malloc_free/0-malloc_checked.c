#include "main.h"

/**
 * malloc_checked - allocates memory
 * if error, cause normal process termination
 * with a status value of 98
 *
 * @b: size of the allocated memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
