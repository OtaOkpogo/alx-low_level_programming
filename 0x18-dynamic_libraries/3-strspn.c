#include "main.h"
/**
 * _strspn - This Calculates the length of a prefix substring
 * @s: The string to search
 * @accept: The string of accepted characters
 * Return: The number of characters in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;

while (*s != '\0')
{
int r = 0;

while (accept[r] != '\0')
{
if (*s == accept[r])
{
n++;
break;
}
else if (accept[r + 1] == '\0')
{
return (n);
}
r++;
}
s++;
}
return (n);
}
