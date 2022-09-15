#include "main.h"

/**
 * print_square - prints a square using the # character
 * @size: parameter to be taken in
 * author: tuneday
 * Return: nothing
 */
void print_square(int size)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
