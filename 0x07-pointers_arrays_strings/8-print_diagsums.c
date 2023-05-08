#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input value
 * @size: input value
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, lm;

	sum1 = 0;
	sum2 = 0;

	for (lm = 0; lm < size; lm++)
	{
		sum1 = sum1 + a[lm * size + lm];
	}
	for (lm = size - 1; lm >= 0; lm--)
	{
		sum2 += a[lm * size + (size - lm - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
