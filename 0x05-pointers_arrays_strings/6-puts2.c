#include "main.h"
/**
 * puts2 - Print every second character starting with the first one.
 * @str: Input string.
 * Return: This function doesn't return a value.
 */
void puts2(char *str)
{
int length = 0;
int o;
while (str[length] != '\0')
{
length++;
}
for (o = 0; o < length; o++)
{
if (o % 2 == 0)
{
_putchar(str[o]);
}
}
_putchar('\n');
}
