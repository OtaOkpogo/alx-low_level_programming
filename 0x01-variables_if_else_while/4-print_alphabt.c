#include <stdio.h>
/**
 * main - This is the main function
 *
 * Return: is zero
 */

int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
