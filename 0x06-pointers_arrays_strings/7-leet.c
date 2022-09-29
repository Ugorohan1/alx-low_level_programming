#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @a: a pointer to the string passed at execution
 *
 * Return: return a pointer to a string.
 */
char *leet(char *a)
{
	int i, j;
	char l[] = {'a', 'e', 'o', 't', 'l'};
	char et[] = {'4', '3', '0', '7', '1'};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i] == l[j] || a[i] == l[j] - 32)
			{
				a[i] = et[j];
			}
		}
	}
	return (a);
}
