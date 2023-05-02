#include "main.h"

/**
 *_strlen-Finds the length of a string.
 *@s:String pointer to the string whose length is to be found.
 *Return: returns the length of the string.
 */

int _strlen(char *s)
{
	int lm = 0;

	while (*(s + lm) != 0)
	{
		lm++;
	}
	return (lm);
}
