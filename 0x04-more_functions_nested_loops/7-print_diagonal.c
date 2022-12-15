#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: input number.
 * Return: diagonal line.
 */
void print_diagonal(int n)
{
	int us, st;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (us = 1; us <= n; us++)
		{
			for (st = 1; st < us; st++)
			{
				_putchar(' ');
			}
			_putchar('\\')
		}
	}
}
