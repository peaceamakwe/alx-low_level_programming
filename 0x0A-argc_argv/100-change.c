#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the minimum number of coins
 * @argc: number of arguments
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int rep, y, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	rep = atoi(argv[1]);
	res = 0;

	if (rep < 0)
	{
		printf("0\n");
		return (0);
	}

	for (y = 0; y < 5 && rep >= 0; y++)
	{
		while (rep >= coins[y])
		{
			res++;
			rep -= coins[y];
		}
	}

	printf("%d\n", res);
	return (0);
}
