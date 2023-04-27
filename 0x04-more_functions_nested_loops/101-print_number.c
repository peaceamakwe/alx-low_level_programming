#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 * Return: no return
 */
void print_number(int n)
{
	unsigned int s, r, count;

	if (n < 0)
	{
		_putchar(45);
		s = n * -1;
	}
	else
	{
		s = n;
	}

	r = s;
	count = 1;

	while (r > 9)
	{
		r /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((s / count) % 10) + 48);
	}
}
