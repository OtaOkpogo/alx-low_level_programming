#include <stdio.h>
#include <stdio.h>
/**
 * main - This is the main function
 *
 * Return: is zero
 */

int main(void)
{
int i, a, b, c;
for (i = 0; i < 1000; i++)
{
a = i / 100;
b = (i / 10) % 10;
c = i % 10;
if (a < b && b < c)
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (i < 789)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
