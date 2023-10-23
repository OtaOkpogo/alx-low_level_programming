#include <stdio.h>
/**
 * set_string - Sets the value of a char pointer to a string.
 * @s: Pointer to a pointer to a char.
 * @to: String to set the pointer to.
 */
void set_string(char **s, char *to)
{
*s = to;
}
