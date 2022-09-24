#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: String to be appended
 * @src: the source string to be joined
 * @Return: void
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
