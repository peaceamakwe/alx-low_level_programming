#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
		if (t == 'e' && t == 'q')
			putchar(t);
	}

	putchar('\n');

	return (0);
}
