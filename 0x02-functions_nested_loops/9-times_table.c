#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
int i, j, prod;
prod = 0;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
prod = j * i;
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (prod >= 10)
{
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
else if ((prod < 10) && (j != 0))
{
_putchar(' ');
_putchar((prod % 10) + '0');
}
else
{
_putchar((prod % 10) + '0');
}
}
_putchar('\n');
}
}
