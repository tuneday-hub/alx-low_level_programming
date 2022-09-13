#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * author: tuneday
 * Return: nothing, just void
 */
void print_alphabet_x10(void)
{
	char a = '0';

	while (a <= '9')
	{
		print_alphabet();
		a++;
	}
	_putchar('\n');
}
