#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * (does not print 2 and 4)
 * Return: no return
 */
void print_most_numbers(void)
{
	int lm;

	for (lm = 48; lm < 58; lm++)
	{
		if (lm != 50 && lm != 52)
			_putchar(lm);
	}
	_putchar('\n');
}
