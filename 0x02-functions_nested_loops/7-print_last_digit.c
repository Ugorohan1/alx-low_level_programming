#include "main.h"

/**
 * print_last_digit_ - prints the last digit
 * @y: the arguments passed
 * Return: the last digit
 */
int print_last_digit(int y);
{
	int x;

	if (y < 0)
		y = -y;
	x = y % 10;
	_putchar(x + '0');
	return (x);
}
