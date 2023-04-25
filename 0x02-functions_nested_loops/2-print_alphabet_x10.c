#include "main.h"

/**
 * print_alphabet_x10 - function to print abc ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alpha, num;

	for (num = 0; num <= 9; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
