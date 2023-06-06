#include "lists.h"

/**
 * pop_listint - deletes the head node
 *
 * @head: pointer to the first element
 *
 * Return: the data inside the elements that was deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *moy;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	moy = (*head)->next;
	free(*head);
	*head = moy;

	return (num);
}
