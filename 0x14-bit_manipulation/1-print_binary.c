#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal no
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int y, con = 0;
	unsigned long int current;

	for (y = 63; y >= 0; y--)
	{
		current = n >> y;

		if (current & 1)
		{
			_putchar('1');
			con++;
		}
		else if (con)
			_putchar('0');
	}
	if (!con)
		_putchar('0');
}
