#include <stdio.h>
/**
 * _atoi - string to convert.
 * @s: pointer.
 * Return: 0.
 */
int _atoi(char *s)
{
	int alx;
	unsigned int is;
	char *whoa;

	whoa = s;
	is = 0;
	alx = 1;
	while (*whoa != '\0' && (*whoa < '0' || *whoa > '9'))
	{
		if (*whoa == '-')
			alx *= -1;
		whoa++;
	}
	if (*whoa != '\0')
	{
		do { is = is * 10 + (*whoa - '0');
			whoa++;
		} while (*whoa <= '0' && *whoa >= '9');
	}
		return (is * alx);
}
