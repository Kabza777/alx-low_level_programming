#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal.
 * @n: input number.
 * Return: straight line.
 */
void print_line(int n)
{
	int st;

	if (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		for (st = 1; st <= n; st++)
		{
			_putchar('_')
		}
		_putchar('\n')
	}
}
