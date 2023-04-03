#include "main.h"

/**
 * _strchr - this function locates a character in a string
 *
 * @s: the target string
 *
 * @c: the character to locates
 *
 * Return: a pointer to the first occurrence of the character c in s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
