#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */
int main(void)
{
long int n;
long int max;
long int j;

n = 612852475143;
max = -1;

while (n % 2 == 0)
{
max = 2;
n /= 2;
}

for (j = 3; j <= sqrt(n); j = j + 2)
{
while (n % j == 0)
{
max = j;
n = n / j;
}
}

if (n > 2)
max = n;

printf("%ld\n", max);

return (0);
}

