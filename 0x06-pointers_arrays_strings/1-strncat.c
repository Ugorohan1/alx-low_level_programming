#include "main.h"

/**
 * _strncat -> a function to contenate two strigs
 * @dest: first string 
 * @src: second string
 * @n: the number of bytes
 *
 * Return: always dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char result[1000];
	int i = 0, l = 0;
	
	while (dest[i] != '\0')
	{
		result[l] = dest[i];
		l++;
		i++;
	}
	result[l] = '\0';
	
	for (i = 0; src[i] && i < n; i++)
	{
		result[l] = src[i];
		l++;
	}

	i = 0;
	l = 0;
	while (result[l] != '\0')
	{
		dest[i] = result[l];
		i++;
		l++;
	}
	dest[i] = '\0';

	return(dest);
}
