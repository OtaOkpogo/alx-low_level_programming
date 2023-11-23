#include "main.h"

/**
 * get_endianness - Function checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int c;
	char *b;

	c = 1;
	b = (char *)&c;
	return (*b);
}
