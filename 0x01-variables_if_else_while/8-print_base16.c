#include <stdio.h>
/**
 * main - print all the numbers of base 16 in lowercase, followed by a new line
 * Description: Print all numbers of base64 in lowercase, using putchar 3 times
 * Return: Always 0
 */
int main(void)
{
	char c;
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
