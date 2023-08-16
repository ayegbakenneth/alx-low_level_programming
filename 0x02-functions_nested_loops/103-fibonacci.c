#include <stdio.h>
/**
 * main - the sum of even valued numbers
 * Return: 0 when successfull
 */
int main(void)
{
	int i;
	unsigned long int a, b, next, sum;

	a = 1;
	b = 2;
	sum = 0;
	for (i = 1; i <= 33; ++i)
	{
		if (a < 40000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}
		next = a + b;
		a = b;
		b = next;
	}
	printf("%lu\n", sum);
	return (0);
}
