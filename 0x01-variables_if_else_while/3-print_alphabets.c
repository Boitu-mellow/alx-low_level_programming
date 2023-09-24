#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and in uppercase
 * printing the alphabet in lowercase, and in uppercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	a = 'A';

	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
