#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * Description: print all letters but the letter 'q' and 'e' using putchar
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
