#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: first input
 * @b: second input
 *Return:
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
