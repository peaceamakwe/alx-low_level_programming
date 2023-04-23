#include <stdio.h>

/**
 * main - prints all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 1; n < 8; n++)
	{
		putchar(n);
		if (n == 7)
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
