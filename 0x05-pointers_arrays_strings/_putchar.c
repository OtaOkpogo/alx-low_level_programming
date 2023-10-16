#include <unistd.h>

/**
 * _putchar - Writes a character to standard output
 * @c: The character to print
 * Return: The number of characters printed
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
