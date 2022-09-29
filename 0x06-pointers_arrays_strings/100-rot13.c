#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13
 * @a: a pointer to a string
 *
 * Return: return a pointer to a string.
 */
char *rot13(char *a)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == alpha[j])
			{
				a[i] = rot13[j];
				break;
			}
		}
	}
	return (a);
}
