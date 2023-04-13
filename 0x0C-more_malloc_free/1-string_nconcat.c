#include "main.h"

/**
 * string_nconcat - a function that concatenates a string
 * with n first characters of another string
 *
 * @s1: pointer to the first string
 * @s2: pointer to the following string
 * @n: unsigned int
 *
 * Return: pointer to the new string if no error,
 * else it will return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i1, i2, z;
	char *s;

	if (s1 == NULL)
	{
		i1 = 0;
	}
	else
	{
		for (i1 = 0; s1[i1]; ++i1)
			;
	}
	if (s2 == NULL)
	{
		i2 = 0;
	}
	else
	{
		for (i2 = 0; s2[i2]; ++i2)
			;
	}
	if (n > i2)
		n = i2;

	s = malloc(sizeof(char) * (i1 + n + 1));
	if (s == NULL)
		return (NULL);
	for (z = 0; z < i1; z++)
		s[z] = s1[z];
	for (z = 0; z < n; z++)
		s[z + i1] = s2[z];
	s[i1 + n] = '\0';
	return (s);
}
