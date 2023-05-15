#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ray;
	int r, lm;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	r = lm = 0;
	while (s1[r] != '\0')
		r++;
	while (s2[lm] != '\0')
		lm++;
	ray = malloc(sizeof(char) * (r + lm + 1));

	if (ray == NULL)
		return (NULL);
	r = lm = 0;
	while (s1[r] != '\0')
	{
		ray[r] = s1[r];
		r++;
	}

	while (s2[lm] != '\0')
	{
		ray[r] = s2[lm];
		r++, lm++;
	}
	ray[r] = '\0';
	return (ray);
}
