#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char num = '0';

while (num <= '9')
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}

