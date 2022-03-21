#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char temp;
	int i, count, c2;

	count = 0;
	c2 = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	c2 = count - 1;

	for (i = 0; i < count / 2; i++)
	{
		temp = s[i];
		s[i] = s[c2];
		s[c2--] = temp;
	}
}
