#include <stdio.h>
#include <stdlib.h>

/**
 * main - prototype
 *
 * @ac - arg 1
 * @av - arg 2
 *
 * Return 0 (success)
 */
int main(int ac, char **av)
{
	int i = 0;

	for (i = 0; i < ac; i++)
	{
		printf("%s ", av[i]);
	}
	printf("\n");
	return (0);
}
