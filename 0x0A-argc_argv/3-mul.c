#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints the multiplication of two integers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 if true, 1 if false.
 */
int main(int argc, char *argv[])
{
	int i, t;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		t = atoi(argv[2]);
		printf("%d\n", i * t);
		return (0);
	}
	printf("Error\n");
	return (1);
}
