#include "main.h"
/**
 * _strncpy - a program that copies one string to another.
 * @dest: First param
 * @src: second param
 * @n: the number of bytes to be copied.
 *
 * Return: always dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char result[1000];
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		result[i] = src[i];
	}
	i = 0;
	while (result[i] != '\0')
	{
		dest[i] = result[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
