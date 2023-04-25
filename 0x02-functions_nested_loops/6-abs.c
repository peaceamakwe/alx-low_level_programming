#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: the integer to.compute its absolute value
 * Return: 0
 */
int _abs(int c)
{

	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
