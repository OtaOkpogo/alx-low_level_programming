#include "main.h"

/**
 * print_line - This prints a straight line on the terminal
 *@n: Number of times charaacter is to be printed
 * Return: void
 */

void print_line(int n)
{
if (n <= 0)
_putchar('\n');
else
{
int i;

for (i = 1 ; i <= n ; i++)
_putchar('_');
_putchar('\n');
}
}
