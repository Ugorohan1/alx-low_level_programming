#include <stdio.h>

/**
 * main - ENtry point
 * Description: Program to print all arguments is receives
 * @argc: Argument Count
 * @argv: Arguments strings
 *
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
