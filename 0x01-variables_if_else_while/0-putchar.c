#include <stdio.h>
#include "main.h"
/**
* main -  program that prints _putchar, followed by a new line
* printing putcha, followed by new line
* Return: Always 0
*/
int main(void)
{
	char putch[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(putch[i]);
	}
	_putchar('\n');
	return (0);
}
