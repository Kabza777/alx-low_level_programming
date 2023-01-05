#include "main.h"
/**
 * _evaluate_n - recursion loop.
 * @n: number.
 * @itr: number to iterate.
 * Return: return 1 and 0.
 */
int _evaluate_n(int n, int itr)
{
	if (itr == n - 1)
	{
		return (0);
	}

	else if (n % itr == 0)
	{
		return (0);
	}

	else if (n % itr != 0)
	{
		return (_evaluate_n(n, itr + 1));
	}
	return (0);
}

/**
 * is_prime_number - evaluate prime or not.
 * @n: number.
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	int itr;

	itr = 2;

	if (n < 2)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	return (_evaluate_n(n, itr));
}
