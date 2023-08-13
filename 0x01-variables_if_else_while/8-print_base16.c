#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int base;

	for (base = '0'; base < 10; base++)
		putchar(base + '0');
	for (base = 0; base < 6; base++)
		putchar(base + 'a');
	putchar('\n');
	return (0);
}
