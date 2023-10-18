#include "main.h"
#include <ctype.h>
/**
* cap_string - Capitalizes all words of a string.
* @str: The string to be capitalized.
* Return: A pointer to the changed string.
*/
char *cap_string(char *str)
{
int index = 0;
int capitalize = 1;

while (str[index] != '\0')
{
if (islower(str[index]))
{
if (capitalize)
{
str[index] = toupper(str[index]);
capitalize = 0;
}
}
else
{
switch (str[index])
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
capitalize = 1;
break;
default:
capitalize = 0;
}
}
index++;
}
return (str);
}
