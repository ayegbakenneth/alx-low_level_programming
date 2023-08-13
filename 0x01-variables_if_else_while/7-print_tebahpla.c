#include <stdio.h>

/**
 * main - My program starting point
 *
 * Return: 0 only
 */
int main(void)
{
	char alphabelt;

	for (alphabelt = 'z'; alphabelt >= 'a'; alphabelt--)
	{
		putchar(alphabelt);
	}
	putchar('\n');
	return (0);
}
