#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 *Description: last digit
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	int n, last_dij

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_dij = n % 10;

	if (last_dij > 5)
		printf("last dij of %d is %d and is and is greater than 5\n", n, last_dij);
	else if (last_dij == 0)
		printf("last dij of %d is %d and is 0\n", n, last_dij);
	else
		printf("last dij of %d is %d and is less than 6 and not 0\n", n, last_dij);
	return (0);
}
