#include <stdio.h>
#include "0-print_name.h"
/**
 * print_to_stdout - Prints a name to the standard output
 * @name: The name to be printed
 */
void print_to_stdout(char *name)
{
if (name != NULL)
{
printf("Name: %s\n", name);
}
}

/**
 * print_name - Calls a function to print a name
 * @name: The name to be printed
 * @f: A function pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char myName[] = "John";
print_name(myName, print_to_stdout);

return (0);
}
