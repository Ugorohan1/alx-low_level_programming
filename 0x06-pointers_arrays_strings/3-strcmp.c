#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: first prameter
 * @s2: second parameter
 *
 * Return: integer value.
 */
int _strcmp(char *s1, char *s2)
{
	int i, value = 0;

	for (i = 0; value == 0; i++)
	{
		if ((s1[i] == '\0') && (s2[i] == '\0'))
			break;
		value = s1[i] - s2[i];
	}
	return (value);
}
