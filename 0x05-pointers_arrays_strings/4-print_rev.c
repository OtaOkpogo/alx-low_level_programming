#include "main.h"
/**
 * print_rev - This Prints a string in reverse order followed by a newline.
 * @s: The string to print in reverse.
 */
void print_rev(char *s)
{
int lenghty = 0;
int o;
while (*s != '\0')
{
lenghty++;
s++;
}
s--;
for (o = lengthy; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
