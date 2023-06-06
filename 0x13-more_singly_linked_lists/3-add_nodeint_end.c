#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 *
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *met;
	listint_t *moy = *head;

	met = malloc(sizeof(listint_t));
	if (!met)
		return (NULL);

	met->n = n;
	met->next = NULL;

	if (*head == NULL)
	{
		*head = met;
		return (met);
	}

	while (moy->next)
		moy = moy->next;

	moy->next = met;

	return (met);
}
