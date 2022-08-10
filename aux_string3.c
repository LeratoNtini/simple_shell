#include "simple_shell.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int count = 0, x, n;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (x = 0; x < (count - 1); x++)
	{
		for (n = x + 1; n > 0; n--)
		{
			temp = *(str + n);
			*(str + n) = *(str + (n - 1));
			*(str + (n - 1)) = temp;
		}
	}
}
