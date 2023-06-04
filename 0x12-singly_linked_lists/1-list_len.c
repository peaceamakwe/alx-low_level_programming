#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the nọ of elements
 * @h: pointer
 * Return: no of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t y = 0;

	while (h)
	{
		y++;
		h = h->next;
	}
	return (y);
}
