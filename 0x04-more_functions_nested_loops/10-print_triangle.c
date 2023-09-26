#include "main.h"

/**
 * print_triangle - function that prints a triangle.
 * @size: numbers of lines.
 * Return: If size is 0 or less, function to print only a new line
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
	for (j = 1; j < (size - i); j++)
	_putchar(' ');
	for (j--; j < size; j++)
	_putchar(35);
	if (i < (size - 1))
	_putchar('\n');
	}
	_putchar('\n');
}
