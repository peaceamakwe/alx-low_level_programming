#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: pointer to the first node
 *
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;
	listint_t *met;
	listint_t *moy = *head;

	met = malloc(sizeof(listint_t));
	if (!met || !head)
		return (NULL);

	met->n = n;
	met->next = NULL;

	if (idx == 0)
	{
		met->next = *head;
		*head = met;
		return (met);
	}

	for (y = 0; moy && y < idx; y++)
	{
		if (y == idx - 1)
		{
			met->next = moy->next;
			moy->next = met;
			return (met);
		}
		else
			moy = moy->next;
	}
	return (NULL);
}
