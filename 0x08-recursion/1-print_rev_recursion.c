#include "main.h"

/**
 * _print_rev_recursion -prints reverse string
 * @s: parameter to be used
 *
 * Description: a function that prints a string in reverse.
 * Return: return void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
