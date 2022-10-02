#include "main.h"
/**
 * _memset - a function that fills memory with constant byte
 * @s: a pointer to the string to get the copy
 * @b: the string for replacement
 * @n: the number of nbytes that will be copied into.
 *
 * Return: returns a pointer to a string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
