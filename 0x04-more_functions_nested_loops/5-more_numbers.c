#include "main.h"

/**
 * more_numbers - Function to print 0 to 14 ten times
 * a: the number of times thge numbers are printed
 * b: the first value of the two digit numbers
 * x: the second value of the two digit numbers
 * y: the one digit numbers represented by x
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int a;
	int b;
	int x;
	int y;

	for (a = 0; a < 10; a++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y < 10)
			{
				x = y;
			}
			else
			{
				b = y / 10;
				x = y % 10;
				_putchar(b + '0');
			}
			_putchar(x + '0');
		}
		_putchar('\n');
	}
}
