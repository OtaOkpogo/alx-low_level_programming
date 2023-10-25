#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - A recursive function to print a string
 * @s: Pointer to the string to be printed.
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
