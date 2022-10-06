#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints multiplication of two intgers
 * @argc: argument count
 * @argv: argument
 * Return: 0 if trues and 0 if false
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("error\n");
	return (1);
}
