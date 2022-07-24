#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * Description: Program to prints the nnumber of arguments passed
 * @argc: Arguments Count.
 * @argv: Arguments Strings.
 *
 * Return: Always 0;
 */

int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
