#include <stdio.h>
/**
 * main - program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: 0.
 */
int main(void)
{
	int num;
	char al;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (al = 'a'; al <= 'f'; al++)
		putchar(al);

	putchar('\n');
	return (0);
}
