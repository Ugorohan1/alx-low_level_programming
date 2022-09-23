#include "main.h"


/**
 * _strcat -> a function that concatenates two strings
 * @src: first param
 * @dest: second param
 *
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (dest[len])
	{

		len++;
	}

	for (i = 0; dest[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
