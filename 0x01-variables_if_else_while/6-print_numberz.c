#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 from 0, then a new line
 * Description: Print all numbers of base 10, from 0 without any type char
 * Return: Always 0
 */
int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		putchar(d + '0');
	}
	putchar('\n');

	return (0);
}
