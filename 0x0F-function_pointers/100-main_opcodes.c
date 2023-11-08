#include <stdlib.h>
#include <stdio.h>

/**
* print_opcodes - print the opcodes of this program
* @x: address of the main function
* @y: number of bytes to print
*
* Return: void
*/
void print_opcodes(char *x, int y)
{
int i;

for (i = 0; i < y; i++)
{
printf("%.2hhx", x[i]);
if (i < y - 1)
printf(" ");
}
printf("\n");
}

/**
* main - prints the opcodes of its own main function
* @argc: number of arguments passed to the function
* @argv: array of pointers to arguments
*
* Return: always O
*/
int main(int argc, char **argv)
{
int y;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
y = atoi(argv[1]);
if (y < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, y);
return (0);
}
