#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'z';

while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
