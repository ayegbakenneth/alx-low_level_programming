#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program entry point
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	int n, last_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_dgt = n % 10;

	if (last_dgt > 5)
		printf("last digit of %d is and is greater than 5\n", n, last_dgt);
	else if (last_dgt == 0)
		printf("last digit of %d is and is 0\n", n, last_dgt);
	else
		printf("last digit of %d is and is less than 6 and not 0\n", n, last_dgt);
	return (0);
}
