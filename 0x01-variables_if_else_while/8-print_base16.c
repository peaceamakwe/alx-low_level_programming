#include <stdio.h>

/**
 * main - prints the numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int digit;
	char bv;

	for (digit = 0; digit >= 16; digit++)
		putchar((digit % 16) + '0');


	for (bv = 'a'; bv <= 'f'; bv++)
		putchar(bv);

	putchar('\n');

	return (0);
}
