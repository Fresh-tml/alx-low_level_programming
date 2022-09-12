#include <stdio.h>

/**
 * main - Prints the alphabet.
 * Description: gives the main function
 * Return: Always 0 (Success)
 */

int main(void)

{
	char alph_mixed[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alph_mixed[i]);
	}
	putchar('\n');
	return (0);

}
