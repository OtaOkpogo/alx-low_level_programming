#include "lists.h"

/**
 * get_nodeint_at_index - It returns the node at a certain index
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int q = 0;
listint_t *temp = head;

while (temp && q < index)
{
temp = temp->next;
q++;
}

return (temp ? temp : NULL);
}
