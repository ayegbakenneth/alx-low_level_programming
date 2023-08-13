#include <stdio.h>

/**
 * main - Where the program always start
 *
 * Return: 0 if successfull
 */
int main(void)
{
	int single_digit;

	for (single_digit = 0; single_digit <= 9; single_digit++)

	{
		putchar(single_digit + '0');
	}

	putchar('\n');

	return (0);
}
