#include <stdio.h>
/**
 * main - This is the main function
 *
 * Return: is zero
 */

int main(void)
{
char hex_digit = '0';
while (hex_digit <= 'f')
{
putchar(hex_digit);
hex_digit++;
if (hex_digit > '9' && hex_digit < 'a')
{
hex_digit = 'a';
}
}
putchar('\n');
return (0);
}
