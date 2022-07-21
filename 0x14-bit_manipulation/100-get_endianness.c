#include "main.h"

/**
 * get_endianness - returns the endianness of the system
 * Description:
 * Return: 0 if big endian, 1 if small
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
