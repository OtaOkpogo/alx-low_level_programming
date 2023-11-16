#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* list_len - This checks the code for ALX School students.
* @h: The name of the list
* Return: The number of nodes.
*/
size_t list_len(const list_t *h)
{
int count = 0;

while (h)
{
count++;
h = h->next;
}
return (count);
}
