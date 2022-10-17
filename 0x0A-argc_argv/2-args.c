#include <stdio.h>
#include <stdlib.h>
/**
 * main -  a program that prints all arguments it receives
 * @argc: first param to count arguments
 * @argv: second param array of argument strings
 *
 * Return: always 0.
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
