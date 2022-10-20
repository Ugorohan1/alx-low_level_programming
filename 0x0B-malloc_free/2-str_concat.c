#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - a program that concatenates two strings
 * @s1: first param to collect s2
 * @s2: second param for concatenation
 *
 * Return: returns a pointer to a string.
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;/*the string to be initialised by malloc*/
	int i, j, len;

	if (s1 == NULL)
		s1 = "";/*treated empty if null*/
	if (s2 == NULL)
		s2 = "";/*treated empty if null*/

	len = strlen(s1) + strlen(s2);
	s3 = malloc((len * sizeof(char)) + 1);

	if (s3 == malloc(0))
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	return (s3);
}
