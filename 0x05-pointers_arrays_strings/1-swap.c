#include "main.h"

/**
 * swap_int-Swaps the values of 2 integers.
 * @a:First argument to be swapped.
 * @b:second argument to be swapped.
 */

void swap_int(int *a, int *b)
{
	int lm = *a;
	*a = *b;
	*b = lm;
}
