#include "main.h"

/**
 * print_triangle - prints a triangle based on parameter passed
 * @size: parameter to be used
 * author: tuneday
 * Return: nothing
 */
void print_triangle(int size)
{
	int a, b, n = size - 1;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b < n)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			n--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
