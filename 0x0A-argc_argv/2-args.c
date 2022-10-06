#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: counts the arguments
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
