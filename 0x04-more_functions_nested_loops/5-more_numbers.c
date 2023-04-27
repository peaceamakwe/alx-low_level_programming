#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 * 10 times
 * Return: no return
 */
void more_numbers(void)
{
	int n, lm;

	for (n = 0; n < 10; n++)
	{
		for (lm = 0; lm < 15; lm++)
		{
			if (lm >= 10)
				_putchar((lm / 10) + 48);
			_putchar((lm % 10) + 48);
		}
		_putchar('\n');
	}
}
