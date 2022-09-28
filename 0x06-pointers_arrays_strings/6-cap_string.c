#include "main.h"
/**
 * cap_string - Function to capitalize the first letter of every word.
 * @a: first param a pointer to a string.
 *
 * Return: return a pointer to string s.
 */
char *cap_string(char *a)
{
	int i = 0, j;
	char sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (a[i] >= 'a' && a[i] <= 'z')/*make first character is a capital letter*/
	{
		a[i] = a[i] - 32;/*using ascii value change case*/
	}
	i++;/*move to the next index to continue exec*/

	for (; a[i] != '\0'; i++)/*loop through whole string*/
	{
		for (j = 0; j < 13; j++)/* loop 13 times per index in search of seperator*/
		{
			if (a[i] == sep[j])/*if sepearator is found execute below code*/
			{
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				{
					a[i + 1] = a[i + 1] - 32;/*using ascii value change case*/
				}
				break;/*if done break out*/
			}
		}
	}
	return (a);
}
