#include "main.h"
/**
 * print_number - a function thatr prints numbers correctly.
 * @n: an integer as an argument
 *
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int r, s, count;

	if (n < 0)/*this accounts for the signe of the number*/
	{
		_putchar('-');/*add the negative sign if negative*/
		r = n * -1;/*but this will change a negative value to positive*/
	}
	else
		r = n;/*the operation has to be done with a positive value*/

	s = r;
	count = 1;

	while (s > 9)
	{
		s /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((r / count)% 10)+ 48);
	}

}
