#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: void
 */
void print_number(int n)
{
unsigned int n11;

if (n < 0)
{
n11 = -n;
_putchar('-');
}
else
{
n11 = n;
}

if (n11 / 10)
{
print_number(n11 / 10);
}

_putchar((n11 % 10) + '0');
}
