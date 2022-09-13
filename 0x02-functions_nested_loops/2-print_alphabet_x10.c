#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * author: tuneday
 * Return: nothing, just void
 */
void print_alphabet_x10(void)
{
	char a = '0', t;

	while (a <= '9')
	{
		t = 'a';
		while (t <= 'z')
		{
			_putchar(t);
			t++;
		}
		a++;
	}
	_putchar('\n');
}
