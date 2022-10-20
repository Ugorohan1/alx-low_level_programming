#include <stdlib.h>
#include "main.h"
/**
 * create_array - a program that creates an array and initilaises it with mallo
 * @size: first param the size of the arraY we wish to create
 * @c: the value for initialisiatiopn in the string
 *
 * Return: return a pointer
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);

	i = 0;/*initially forgot to initialise*/
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
