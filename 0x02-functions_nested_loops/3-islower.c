#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 * Return: 1 if c is lowercase and 0 otherwise
 * LowerCase alphabet from 97-122
 * Uppercase alphabet from 65-90
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
