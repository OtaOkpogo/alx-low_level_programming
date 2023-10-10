#include "main.h"
/**
 * 3-islower - This checks for lowercase chaacter
 *@c: parameter to be checked
 * Return: 0 on failure and 1 on success
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
