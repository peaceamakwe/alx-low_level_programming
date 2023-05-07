#include "main.h

/**
* reverse_array - reverse array of integers
* @a: array
* @n: number of elements of array
* Return: void
*/
void reverse_array(int *a, int n)
{
	int x;
	int j;

	for (x = 0; x < n--; x++)
	{
		j = a[x];
		a[x] = a[n];
		a[n] = j;
	}
}
