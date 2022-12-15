#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * Return: from 0 to 14.
 */
void more_numbers(void)
{
	int v, us;

	for (us = 0; us <= 9; us++)
	{
		for (v = 0; v <= 14; v++)
		{
			if (v > 9)
				_putchar((v / 10) + '0');
					_putchar((v % 10) + '0');
		}
		_putchar('\n')
	}
}
