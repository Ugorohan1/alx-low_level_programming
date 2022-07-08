#include "main.h"

/**
 * _isupper - prints the upper case
 * @c: the parameter to check the uppercase
 *
 * Return: returns 1 if uppercase, or 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
