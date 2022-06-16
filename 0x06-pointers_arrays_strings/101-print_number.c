#include "main.h"
/**
 * print_number - prints integer
 * @n:  the integer to be printed
 * Description:takes inputs and prints an integer
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('_');
		n *= -1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');

}
