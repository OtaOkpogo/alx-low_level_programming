#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - Prints strings with a separator
 * @separator: The string to be printed between the strings
 * @n: The number of strings to be printed
 * @...: Variable number of string arguments
 *
 * Description: This function takes a variable number of a string
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list ap;
va_start(ap, n);
if (separator == NULL)
separator = "";
for (x = 0; x < n; x++)
{
printf("%d", va_arg(ap, int));
if (x < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
