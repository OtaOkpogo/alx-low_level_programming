#include "main.h"
/**
 * print_alphabet_x10 - This prints alphabets in lower case x10
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
int j;
char k;

for (j = 0 ; j < 10 ; j++)
{
for (k = 'a' ; k <= 'z' ; k++)
_putchar(k);
_putchar('\n');
}
}
