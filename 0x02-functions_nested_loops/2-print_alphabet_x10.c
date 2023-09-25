#include "main.h"

/**
 * print_alphabet_x10 - 10 times the alphabet, in lowercase,then new line
 *function that prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	char c;
	int l;

	l = 0;

	while (l < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		l++;
	}
}
