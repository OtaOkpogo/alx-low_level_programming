#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings with a separator
 * @separator: The string to be printed between the strings
 * @n: The number of strings to be printed
 * @...: Variable number of string arguments
 *
 * Description: This function takes a variable number of strings
 * and prints them to the standard output with the specified separator
 * between them.
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
char *str = va_arg(ap, char *);
if (str != NULL)
printf("%s", str);

if (x < n - 1)
printf("%s", separator);
}

printf("\n");

va_end(ap);
}
