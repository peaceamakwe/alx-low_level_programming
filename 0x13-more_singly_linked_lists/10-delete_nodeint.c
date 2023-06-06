#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 *
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *moy = *head;
	listint_t *occur = NULL;
	unsigned int y = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(moy);
		return (1);
	}

	while (y < index - 1)
	{
		if (!moy || !(moy->next))
			return (-1);
		moy = moy->next;
		y++;
	}

	occur = moy->next;
	moy->next = occur->next;
	free(occur);

	return (1);
}

