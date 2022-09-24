#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: first input
 * @src: second input
 * @Return: a string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += l;
	}
	dest[len] = '\0';
	return (dest);
}
