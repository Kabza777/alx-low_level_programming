#include <stdio.h>
/**
 * main - program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	char ra;

	for (ra = 'z'; ra >= 'a'; ra--)
		putchar(ra);

	putchar('\n');
	return (0);
}
