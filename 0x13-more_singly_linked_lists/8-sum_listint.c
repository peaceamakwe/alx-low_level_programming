#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data
 * @head: first node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *moy = head;

	while (moy)
	{
		sum += moy->n;
		moy = moy->next;
	}
	return (sum);
}

