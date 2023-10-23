#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locate the first occurrence of a character in a string
 * @s: The string to search
 * @c: The character to find
 * Return: A pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '\0')
{
if (s[i] == c)
return (&s[i]);
i++;
}
return (NULL);
}
