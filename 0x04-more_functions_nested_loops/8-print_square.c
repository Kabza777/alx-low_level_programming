#include "main.h"
/**
 * print_square - function that prints a square,
 * followed by a new line.
 * @size: size of width and length.
 * Return: a square.
 */
void print_square(int size)
{
	int us, st;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (us = 1; us <= size; us++)
		{
			_putchar('#');
		}
				for (st = 2; st <= size; st++)
				{
					_putchar('#');
				}
				_putchar('\n');
	}
}
