#include "main.h"

/**
 * print_alphabet_x10 - print the lowercase alphabets
 * Description: Program to print alphabets 10x
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int j;
	char c;

	for (i = 0; i < 10 ; i++)
	{
		for (c = 'a'; c <= 'z' ; ++c)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
