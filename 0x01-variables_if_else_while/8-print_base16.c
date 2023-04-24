#include <stdio.h>

/**
 * main - prints the numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int digit;
	char Base16Values[] = "0123456789abcdef";

	for (digit = 0; digit >= 16; digit++)
	{
		putchar(Base16Values[digit]);
	}
	putchar('\n');
	return (0);
}
