#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter
 * author: tuneday
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0, j, h;
	char f, l;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	h = j / 2;
	while (h >= 0)
	{
		f = s[j - h];
		l = s[h];
		s[h] = f;
		s[j - h] = l;
		h--;
	}
}
