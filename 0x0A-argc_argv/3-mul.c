#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: int
 */

int _atoi(char *s)
{
	int y, d, n, g, len, digit;

	y = 0;
	d = 0;
	n = 0;
	g = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (y < len && g == 0)
	{
		if (s[y] == '-')
			++d;

		if (s[y] >= '0' && s[y] <= '9')
		{
			digit = s[y] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			g = 1;
			if (s[y + 1] < '0' || s[y + 1] > '9')
				break;
			g = 0;
		}
		y++;
	}
	if (g == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int result, num_1, num_2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num_1 = _atoi(argv[1]);
	num_2 = _atoi(argv[2]);
	result = num_1 * num_2;

	printf("%d\n", result);

	return (0);
}
