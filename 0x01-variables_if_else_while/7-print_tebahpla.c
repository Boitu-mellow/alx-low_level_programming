#include <stdio.h>
/**
 * main - program that prints the lowercase alphabet in reverse
 * Description: Print the alphabet in reverse order in lowercase,using putchar
 * Return: Alway 0
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);
}
