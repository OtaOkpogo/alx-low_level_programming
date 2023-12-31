#include "main.h"
#include <stdlib.h>
/**
* argstostr - concatenates all the arguments of your program.
* @ac: arguments count
* @av: arguments vector
*
* Return: a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
char *str, *s;
int i, j, k, len = 0;

if (ac == 0 || av == (char **)NULL)
return ((char *)NULL);

for (i = 0; i < ac; i++)
{
s = av[i];
j = 0;

while (s[j] != '\0')
{
len++;
j++;
}
len++;
}

str = (char *)malloc(sizeof(char) * (len + 1));
if (str == (char *)NULL)
return ((char *)NULL);

for (i = 0, j = 0; i < ac && j < len; i++)
{
s = av[i];
k = 0;

while (s[k] != '\0')
{
str[j] = s[k];
k++;
j++;
}
str[j++] = '\n';
}
str[j] = '\0';

return (str);
}
