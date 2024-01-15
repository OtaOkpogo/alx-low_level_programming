#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locate the first occurrence of a substring in a string
 * @haystack: The string to search
 * @needle: The substrig is to find
 * Return: A pointer to the first occurrence of the substring
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *l = haystack;
char *p = needle;

while (*l == *p && *p != '\0')
{
l++;
p++;
}
if (*p == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
