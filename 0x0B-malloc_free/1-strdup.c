#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *mar;
	int r, y = 0;

	if (str == NULL)
		return (NULL);
	r = 0;
	while (str[r] != '\0')
		r++;

	mar = malloc(sizeof(char) * (r + 1));

	if (mar == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		mar[y] = str[y];

	return (mar);
}
