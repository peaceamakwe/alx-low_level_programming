#include "main.h"

/**
 * print_sign - funtion that prints the sign of a number
 * @n: the integer for the argument
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar ('-');
		return (-1);
	}
}
