#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 */
char *argstostr(int ac, char **av)
{
	char *arg;
	int i, j, count, r;

	if (ac == 0)
		return (NULL);

	count = 0;

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}

	arg = malloc((count + 1) * sizeof(char));
	if (arg == NULL)
	{
		free(arg);
		return (NULL);
	}
	i = 0, j = 0, r = 0;
	while (r < count)
	{
		if (av[i][j] == '\0')
		{
			arg[r] = '\n';
			i++;
			r++;
			j = 0;
		}
		if (r < count - 1)
			arg[r] = av[i][j];
		r++;
		j++;
	}
	arg[r] = '\0';
	return (arg);
}
