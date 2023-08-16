#include <stdio.h>
/**
 * main - this is the starting point
 *description: calculating numbers
 * Return: 0
 */
int main(void)
{
	int a = 0;
	unsigned long int x = 0, y = 1, next = 0;

	while (a < 98)
	{
		next = x + y;
		x = y;
		y = next;
		printf("%lu", next);
		if (a < 97)
			printf(", ");
		a++;
	}
	putchar('\n');
	return (0);
}
