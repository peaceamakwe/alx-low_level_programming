#include "lists.h"

/**
 * get_nodeint_at_index - returns the node
 * @head: first nod
 * @index: index of the node to return
 * Return: pointer to the node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;
	listint_t *moy = head;

	while (moy && y < index)
	{
		moy = moy->next;
		y++;
	}
	return (moy ? moy : NULL);
}
