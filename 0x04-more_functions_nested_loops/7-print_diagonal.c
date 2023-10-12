#include "main.h"

/**
 * print_diagonal - This command prints a diagonal line
 * @n: This is the number of times \ is to be printed
 * Return: void
 */

void print_diagonal(int n)
{
if (n <= 0)
_putchar('\n');
else
{
int j;
int k;

for (j = 0 ; j < n ; j++)
{
for (k = 0 ; k <= j ; k++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
}
