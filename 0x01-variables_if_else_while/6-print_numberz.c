#include <stdio.h>

/**
 * main - This is where the program starts
 *
 * Return: 0 when successfull
 */
int main(void)
{
	int nan;

	for (nan = 0; nan < 10; nan++)
		putchar((nan % 10) + '0');
	putchar('\n');
	return (0);
}
