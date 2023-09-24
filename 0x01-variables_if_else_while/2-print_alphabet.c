#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Print the alphabet in lowercase and allow a new line to follow
 * Return: Always 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
