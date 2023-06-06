#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number
 * @head: A pointer to the head
 *
 * Return: If the list is not looped - 0
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *toll, *hall;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	toll = head->next;
	hall = (head->next)->next;

	while (hall)
	{
		if (toll == hall)
		{
			toll = head;
			while (toll != hall)
			{
				nodes++;
				toll = toll->next;
			}
			return (nodes);
		}
		toll = toll->next;
		hall = (hall->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list
 * safely
 * @head: A pointer to the head of list
 * Return: The number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, ind = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (ind = 0; ind < nodes; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
