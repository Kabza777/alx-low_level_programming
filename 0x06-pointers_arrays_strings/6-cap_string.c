#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @gin: pointer.
 * Return: gin.
 */
char *cap_string(char *gin)
{
	int i = 0;

	while (gin[i])
	{
		while (!(gin[i] >= 'a' && gin[i] <= 'z'))
			i++;
		if (gin[i - 1] == ' ' ||
				gin[i - 1] == '\t' ||
				gin[i - 1] == '\n' ||
				gin[i - 1] == ',' ||
				gin[i - 1] == ';' ||
				gin[i - 1] == '.' ||
				gin[i - 1] == '!' ||
				gin[i - 1] == '?' ||
				gin[i - 1] == '"' ||
				gin[i - 1] == '(' ||
				gin[i - 1] == ')' ||
				gin[i - 1] == '{' ||
				gin[i - 1] == '}' ||
				i == 0)
			gin[1] -= 32;
		i++;
	}
	return (gin);
}
