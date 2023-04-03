#include "main.h"

/**
 * _strpbrk - this function that searches a string for any of a set of bytes
 *
 * @s: the string target
 *
 * @accept: the chat set
 *
 * Return: a pointer to the subset first byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
