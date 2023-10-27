#include "main.h"
/**
 * _isupper - checks for upper case character
 * @c: function parameter
 * Return: Always 0 on failure and 1 on success
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
