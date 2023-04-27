#include "main.h"

/**
 * _isupper - to check if parameter is an uppercase character.
 * @c: the input character.
 * Return: 1 if is an uppercase character, 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
