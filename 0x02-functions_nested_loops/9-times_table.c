#include <stdio.h>
#include "main.h"
/**
* times_table - print the 9 timetable
* Return: void
*
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	if ((j * i) > 9)
	{
	if (j != 0)
	{
	_putchar(' ');
	}
	_putchar((j * i) / 10 + '0');
	_putchar((j * i) % 10 + '0');
	if (j < 9)
	_putchar(',');
	}
	else
	{
	if (j != 0)
	{
	_putchar(' ');
	_putchar(' ');
	}
	_putchar((j * i) + '0');
	if (j < 9)
	_putchar(',');
	}
	}
	_putchar('\n');
	}
}
