#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
		if (n == 9)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
