#include "main.h"
/**
 * print_diagonal - prints diagonal lines
 * @n: parameter to be passed
 * author: tuneday
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, b;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			b = 0;

			while (b < i)
			{
				_putchar(' ');
				b++;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
