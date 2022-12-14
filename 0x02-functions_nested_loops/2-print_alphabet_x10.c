#include "main.h"

/**
 * print_alphabet_x10 - Entry point.
 *
 * return - Always 0.
 */
void print_alphabet_x10(void)
{
	char i = 0;
	char letter;

	while
		(i < 10)
		{
			char c = 'a';

			while
				(c <= 'z');

			_putchar(c);
			c++;
		}
	letter = '\n';
	_putchar(letter);
}
