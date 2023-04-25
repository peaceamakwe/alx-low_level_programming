#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @num: the integer to.compute its absolute value
 * Return: 0
 */
int _abs(int num)
{
	int num;
	int value;

	if (num < 0)
	{
		num = num * (-1);
	}
	value = num;
	return (value);
}
