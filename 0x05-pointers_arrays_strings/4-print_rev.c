#include "main.h"

/**
 * print_rev - reverses a string followed by a new line
 * @s: parameter
 * author: tuneday
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int r;

	while (s[i] != '\0')
	{
		i++;
	}
	for (r = i - 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
