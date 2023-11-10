#include "variadic_functions.h"

/**
 * print_all - Prints all of the arguments when specified
 * @format: Specifies the necessary operations
 * Return: void
 */
void print_all(const char * const format, ...)
{
int x = 0;
int flag = 0;
char *str;
va_list a_list;

va_start(a_list, format);

while (format[x] != '\0')
{
switch (format[x])
{
case 'c':
printf("%c", va_arg(a_list, int));
break;
case 'x':
printf("%x", va_arg(a_list, int));
break;
case 'f':
printf("%f", va_arg(a_list, double));
break;
case 's':
str = va_arg(a_list, char*);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
flag = 1;
break;
}

if (format[x + 1] != '\0' && flag == 0)
printf(", ");

x++;
flag = 0;
}

printf("\n");
va_end(a_list);
}
