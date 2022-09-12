#include <stdio.h>

/**
 * <<<<<<< HEAD
 * main - Prints numbers between 0 to 89.
 *  =======
 * Description: gives the main function
 * main - Prints numbers between 00 to 89.
 * >>>>>>> 1b4694b8a7e17b4bf5617afc0a0a26311f48e175
 * Description: gives the main function
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i, e;

	i = 48;
	e = 48;
	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);

}
