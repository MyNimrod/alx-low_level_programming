#include "main.h"

/**
 * print_alphabet - prints small letter alphabet a-z
 *
 * Since the print_alphabet prints a-z, it will be repeated 10 times
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}

/**
* print_alphabet_x10 - prints the print_alphabet function 10 times
*/
void print_alphabet_x10(void)
{
char j;
for (j = '0'; j <= '9'; j++)
{
print_alphabet();
}
}
