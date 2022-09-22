#include "main.h"

/**
 * _strncpy - copies at most an inputted number of bytes from string src
 *  @dest: the buffer storing the string copy.
 *  @src: the source string
 *  @n: the maximum number of bytes copied from src
 *  Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
