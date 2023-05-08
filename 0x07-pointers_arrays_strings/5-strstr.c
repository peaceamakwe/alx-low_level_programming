#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *m = needle;

		while (*l == *m && *m != '\0')
		{
			l++;
			m++;
		}

		if (*m == '\0')
			return (haystack);
	}
	return (0);
}

