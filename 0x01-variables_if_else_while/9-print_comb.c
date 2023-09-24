#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Description: Print all combinations of one-digit numbers, no type char
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar('\n');

	return (0);
}
