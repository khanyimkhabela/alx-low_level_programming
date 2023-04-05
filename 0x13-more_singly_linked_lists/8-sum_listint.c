#include "lists.h"

/**
 * sum_listint -  returns the sum of all  data (n) of a listint_t linked list
 * @head: first node
 * Return: sum, else if list empty 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
