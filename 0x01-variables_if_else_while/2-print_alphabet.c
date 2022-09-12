#include <stdio.h>

/**
 * main - Prints the alphabet.
 * Description: gives main function
 * Return: Always 0 (Success)
 */

int main(void)

{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);

}
