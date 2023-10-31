#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* str_concat - concatenates two strings.
* @s1: first string
* @s2: second string
* Return: a pointer to a newly allocated space in memory which
* contains the contents of s1, followed by the contents of s2,
* and null terminated. NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
int i, j, len1, len2, len;
char *result;

len1 = 0;
len2 = 0;

if (s1 != (char *)NULL)
{
i = 0;
while (s1[i] != '\0')
{
len1++;
i++;
}
}

if (s2 != (char *)NULL)
{
i = 0;
while (s2[i] != '\0')
{
len2++;
i++;
}
}

len = len1 + len2;
result = (char *)malloc((sizeof(char) * len + 1));
if (result == (char *)NULL)
return ((char *)NULL);

for (i = 0; i < len1; i++)
result[i] = s1[i];
for (j = 0; j < len2; j++, i++)
result[i] = s2[j];
result[len] = '\0';
return (result);
}
