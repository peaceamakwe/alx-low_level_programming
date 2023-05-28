#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters
 * @n: The number of paramters passed to the function
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list my_num;
	unsigned int i, sum = 0;

	va_start(my_num, n);

	for (i = 0; i < n; i++)
		sum += va_arg(my_num, int);

	va_end(my_num);

	return (sum);
}
