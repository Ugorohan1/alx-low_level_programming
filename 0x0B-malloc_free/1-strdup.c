#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - Function that return a pointer to a newly allocated
 * space in memory, which contains a copy of the string in the
 * parameter.
 * @str: string.
 *
 * Return: pointer to allocated space.
 */

char *_strdup(char *str)
{
	char *dup;/*the pointer to the string to be intialised with malloc*/
	int len;/*i want the length of the string so i know the limit to duplicate*/
	int i = 0;/*for traversing through string*/

	if (str == NULL)
		return (NULL);/*if the string is empty*/
	len = strlen(str);
	dup = malloc((len *  sizeof(char)) + 1);

	if (dup == NULL)
		return (NULL);/*malloc failed*/
	if (dup == malloc(0))/*insufficient memory*/
		return (NULL);

	while (i <= len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
