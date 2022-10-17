#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints its name
 * @argc: first param to count arguments
 * @argv: second param, a string or arguments passed at command line
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
