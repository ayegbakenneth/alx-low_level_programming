#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: last digit
 *
 *Return: Always 0 (success)
*/

int main(void)
{
	int n;
	int last_digit;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
		printf("last digit of %d is %d and is and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("last digit of %d is %d and is 0\n", n, last_digit);
	else
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	return (0);
}
