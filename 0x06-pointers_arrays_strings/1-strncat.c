#include "main.h"
/**
 * _strncat -> a string thst concatenates two strings
 * with a length in mind
 * @dest - first param to have src sting added.
 * @src - second param where the characters are from 
 *
 * Return: return a pointer to a string
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
	
	for (i = 0; src[i] != '\0' && i < n; i++)
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
	return(dest);

}
