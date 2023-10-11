#include "main.h"
/**
 * print_last_digit - This prints the last digit
 * @n: function parameter
 * Return: k
 */

int print_last_digit(int n)
{
int m;
m = n % 10;
if (n < 0)
m = -m;
_putchar(m + '0');
return (m);

}
