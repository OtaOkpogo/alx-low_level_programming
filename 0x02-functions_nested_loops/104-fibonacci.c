#include <stdio.h>
/**
 * main - this is the msin function
 *
 * Return: 0
 */

int main(void)
{
unsigned int a = 1, b = 2, next;

printf("%u, %u, ", a, b);

for (unsigned int i = 3; i <= 98; i++)
{
next = a + b;

if (i < 98)
printf("%u, ", next);
else
printf("%u\n", next);

a = b;
b = next;
}

return (0);
}
