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
	char result[1000];
	int i = 0, l = 0;

	while (dest[i] != '\0')
	{
		result[l] = dest[i];
		i++;
		l++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		result[l] = src[i];
		l += 1;
	}
	result[l] = '\0';

	i = 0;
	l = 0;
	while (result[l] != '\0')
	{
		dest[i] = result[l];
		l++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
