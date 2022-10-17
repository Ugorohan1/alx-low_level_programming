#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program to demonstrate argv and argc
 * @argc: first param count the arguments in main
 * @argv: an array of string of arguments in main
 *
 * Return: return always 0
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
