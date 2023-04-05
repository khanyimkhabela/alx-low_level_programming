#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node
 * @index: index of node starting at 0
 * Return: nth node, else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a = 0;
listint_t *temp = head;
while (temp && a < index)
{
temp = temp->next;
a++;
}
return (temp ? temp : NULL);
}
