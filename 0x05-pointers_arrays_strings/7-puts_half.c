#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: input.
 * Return: last n characters of the string,
 * where n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
