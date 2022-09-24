#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies at most an inputted number of bytes from string src
 *  @dest: the buffer storing the string copy.
 *  @src: the source string
 *  @n: the maximum number of bytes copied from src
 *  Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
