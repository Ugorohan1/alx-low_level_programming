#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer to memory area
 * @b: char to be filled
 * @n: Number of bytes to be filled
 *
 * Return: always s
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
