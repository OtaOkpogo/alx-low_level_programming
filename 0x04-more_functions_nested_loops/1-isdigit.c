#include "main.h"
/**
 * _isdigit - This function checks 0 through 9
 * @c: function to check parameter
 * Return: 0 on failure and 1 on success
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
