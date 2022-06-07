#include "main.h"

/**
 * _isalpha - returns 1 if c is a letter
 * @c: checks for alphabetic character.
 *
 * lowercase (97 to 122) uppercase (65 to 90.)
 *
 * Return: 1 if c is a letter, lowercase or uppercase or 0 otherwise
 */

int _isalpha(int c)
{
if ((c <= 90) && (c >= 65))
{
return (1);
}
else if ((c >= 97) && (c <= 122))
{
return (1);
}
else
{
return (0);
}
}
