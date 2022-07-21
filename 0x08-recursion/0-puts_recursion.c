#include "main.h"

/**
 * _puts_recursion - print recursive
 * @s: parameter to be  used
 *
 * Description: a function thst prints string recursively
 * Return: return void
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;

	}
	_putchar(*s);
	s++;
	_puts_recursion(s);

}
