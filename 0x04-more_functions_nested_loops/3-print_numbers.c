#include "main.h"
/**
 * print_numbers -  function that prints the numbers,
 * from 0 to 9, followed by a new line.
 *
 * Return: numbers 0 to 9.
 */
void print_numbers(void)
{
	int v;

	for (v = 0; v <= 9; v++)
	       	_putchar(v + '0');
	_putchar('\n');
}
