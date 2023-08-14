#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if (successfull)
 */
int  main(void)
{
	int d, e;

	for (d = 0; d <= 99; d++)
	{
		for (e = d; e <= 99; e++)
		{
			if (d != e)
			{
				putchar(d / 10 + '0');
				putchar(d % 10 + '0');
				putchar(' ');
				putchar(e / 10 + '0');
				putchar(e % 10 + '0');
				if (d != 98 || e != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
