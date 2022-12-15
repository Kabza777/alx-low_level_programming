#include "main.h"
/**
 * print_most_numbers - function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return: numbers 0-9 except 2 and 4.
 */
void print_most_numbers(void)
{
	int v;

	for (v = 0; v <= 9; v++)
	{
		if ((v == 2) || (v == 4))
			continue;

		else
			_putchar(v + '0');
	}
	_putchar('\n')
}

