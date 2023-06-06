#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node
 * @n: data to insert in new node
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *met;

	met = malloc(sizeof(listint_t));
	if (!met)
		return (NULL);

	met->n = n;
	met->next = *head;
	*head = met;

	return (met);
}

