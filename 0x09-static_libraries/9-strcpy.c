#include "main.h"
/**
 * _strcpy - Copy a string from src to dest.
 * @dest: The destination buffer to copy to.
 * @src: The source string to copy from.
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
int n = 0;
while (src[n] != '\0')
{
dest[n] = src[n];
n++;
}
dest[n] = '\0';
return (dest);
}

