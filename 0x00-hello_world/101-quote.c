#include <stdio.h>
#include <wchar.h>
#include <stddef.h>

/**
 * main - Entry Point
 * Description: it prints out the word
 * Return: Always the value 1 (success)
 */

int main(void)
{
	wchar_t sr[] = L"and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	wprintf(L"%ls\n", sr);
	return (1);
}
