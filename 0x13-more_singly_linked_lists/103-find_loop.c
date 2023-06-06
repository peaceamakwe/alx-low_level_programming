#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slop = head;
	listint_t *fact = head;

	if (!head)
		return (NULL);

	while (slop && fact && fact->next)
	{
		fact = fact->next->next;
		slop = slop->next;
		if (fact == slop)
		{
			slop = head;
			while (slop != fact)
			{
				slop = slop->next;
				fact = fact->next;
			}
			return (fact);
		}
	}
	return (NULL);
}

