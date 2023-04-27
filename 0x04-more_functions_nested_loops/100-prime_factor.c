#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: Always 0
 */

int main(void)
{
	long int j, ab;

	j = 612852475143;
	for (ab = 2; ab <= j; ab++)
	{
		if (j % ab == 0)
		{
			j /= ab;
			ab--;
		}
	}
	printf("%ld\n", ab);
	return (0);
}
