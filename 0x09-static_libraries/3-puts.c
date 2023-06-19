#include "main.h"

/**
 * _puts - prints a string to standard output
 *
 * @str: parameter
 * Author: tuneday
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
