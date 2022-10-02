#include "main.h"
/**
 * _strchr -> a function that locates a character in a string.
 * @c: The character being searched for.
 * @s: a string to be returned.
 *
 * Return: return c or '\0' if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s != c)
	{
		return ('\0');
	}
	return (s);
}
