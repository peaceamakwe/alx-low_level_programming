#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: 0 Always.
 */
int main(void)
{
	int j = 0, p = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (p < 2772)
	{
		j = rand() % 128;
		if ((p + j) > 2772)
			break;
		p = p + j;
		printf("%c", j);
	}
	printf("%c\n", (2772 - p));
	return (0);
}
