#include "main.h"

/**
 * print_times_table -  prints the n times table
 * @n: Number of the times table (0-15)
 * Return: void
 */

void print_times_table(int n)
{
if (n < 0 || n > 15)
{

int i, j, k;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = i * j;

if (j > 0)
{
_putchar(',');
_putchar(' ');

if (k < 10)
{
_putchar(' ');
_putchar(' ');
}
else if (k < 100)
{
_putchar(' ');
}
}
_putchar(k / 100 + '0');
_putchar((k / 10) % 10 + '0');
_putchar(k % 10 + '0');
}
_putchar('\n');
}
}
}
