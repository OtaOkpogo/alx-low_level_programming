#include "main.h"
/**
* rot13 - encodes a string into ROT13
* @n: input value
* Return: n value
*/
char *rot13(char *n)
{
int i, j;
char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; s1[j] != '\0'; j++)
{
if (n[i] == s1[j])
{
n[i] = s2[j];
break;
}
}
}
return (n);
}
