#include <stdio.h>

/**
 * main - prints all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 51; n < 68; n++)
	{
		putchar(n);
		if (n != 67)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
