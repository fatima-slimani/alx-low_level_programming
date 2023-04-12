#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a target of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string
 * if sufficient memory was available else NULL
 */
char *_strdup(char *str)
{
	char *target;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	target = (char *)malloc((sizeof(char) * len) + 1);
	if (target == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		target[i] = str[i];
	target[len] = '\0';

	return (target);
}
