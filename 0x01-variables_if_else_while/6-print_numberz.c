#include <stdio.h>

/**
 * main - Program Entry
 * Return
 */
int main(void)
{
	int integer;

	for (integer = 0; integer < 10; integer++)
		putchar((integer % 10) + '0');

	putchar('\n');

	return (0);
}
