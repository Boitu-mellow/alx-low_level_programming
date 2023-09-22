#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable n
 * last digit should greater than 5, 0, or less than 6
 * Return: 0
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (lastdigit > 5)
		printf("greater than 5\n");
	else if (lastdigit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
