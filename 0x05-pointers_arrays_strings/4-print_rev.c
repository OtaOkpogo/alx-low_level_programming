#include "main.h"
/**
 * print_rev - This Prints a string in reverse order followed by a newline.
 * @s: The string to print in reverse.
 */
void print_rev(char *s)
{
int lengthe = 0;
while (s[lengthe] != '\0')
{
lengthe++;
}
s--;

for (int i = lengthe; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
