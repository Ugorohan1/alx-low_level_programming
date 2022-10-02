#include "main.h"
/**
 * _memcpy -> function copies n bytes from memory area
 * @dest: the destination to get copied into
 * @src: the source of the of the string for copy
 * @n: the number of bytres to be copieda
 *
 * Return: return a pointer to destination string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
