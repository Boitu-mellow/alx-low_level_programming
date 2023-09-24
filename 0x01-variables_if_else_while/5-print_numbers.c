#include <stdio.h>
/**
 * main - all numbers from base 10, starting with 0
 * Description: Print all numbers of base 10, starting from 0
 * Return: Always 0
 */
int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		printf("%d", d);
	}
	putchar('\n');

	return (0);
}
