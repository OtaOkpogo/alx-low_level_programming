#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* _strlen - This returns the length of a string.
* @s : s is a character
* Return: value is i
*/
int _strlen(const char *s)
{
int k = 0;

while (s[k] != '\0')
{
k++;
}
return (k);
}

/**
* add_node - It adds a new node at beginning of a list_t list.
* @head: head of a list_t list.
* @str: value to insert into element.
* Return: the number of nodes.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *add;

add = malloc(sizeof(list_t));
if (add == NULL)
return (NULL);
add->str = strdup(str);

add->len = _strlen(str);
add->next = *head;
*head = add;

return (add);
}
