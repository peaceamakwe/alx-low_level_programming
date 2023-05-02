#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	int b, d, n, cal, f, digit;

	b = 0;
	d = 0;
	n = 0;
	cal = 0;
	f = 0;
	digit = 0;

	while (s[cal] != '\0')
		cal++;

	while (b < cal && f == 0)
	{
		if (s[b] == '-')
			++d;

		if (s[b] >= '0' && s[b] <= '9')
		{
			digit = s[b] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[b + 1] < '0' || s[b + 1] > '9')
				break;
			f = 0;
		}
		b++;
	}
	if (f == 0)
		return (0);

	return (n);
}
