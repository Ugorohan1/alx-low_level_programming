#include "main.h"

/**
 * print_line - Function to print line in terms with the number
 * inputed
 * @b: number of line
 *
 * Return: nothing
 */

void print_line(int b)
{
	int i;

	if (b > 0)
	{
		for (i = 0; i < b; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
