#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - A recursive function to print a string
 * @s: Pointer to the string to be printed.
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
putchar(*s);
_puts_recursion(s + 1);
}
else
{
putchar('\n');
}
}
