#include "main.h"
#include <string.h>
/**
 * _strcat - a function that concatenates two strings
 * @src: source string
 * @dest: destination string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	len = strlen(dest);
	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
