#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: input string
 * Return: no return
 */

void print_rev(char *s)
{
	int count = 0;
	int b;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (b = count; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
