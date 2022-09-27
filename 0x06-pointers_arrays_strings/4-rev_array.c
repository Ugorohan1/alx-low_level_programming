#include "main.h"
/**
 * reverse_array - function that reverses the content
 * of an array.
 * @a: first param pointer to string
 * @n: second param n bytes to be taken into account.
 *
 * Return: return nothing.
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
