#include <unistd.h>

/**
 * _strcat - concatenates two strings.
 * _strncat - Similar to _strcat except it uses n bytes 
 * _strncpy - Copies a string 
 * _strcmp - a function that compares two strings
 */

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
