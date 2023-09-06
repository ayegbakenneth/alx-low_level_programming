#include <stdio.h>
#include "main.h"
/**
 * _atoi - Strings into integers
 * @s: string to be converted
 * Return: int from string
 */
int _atoi(char *s)
{
	int a, b, c, ken, d, digit;

	a = 0;
	b = 0;
	c = 0;
	ken = 0;
	d = 0;
	digit = 0;

	while (s[ken] != '\0')
		ken++;
	while (a < ken && d == 0)
	{
		if (s[a] == '-')
			++d;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}
/**
 * main - Multiplication of two numbers
 * @argc: arguments
 * @argv: argument array
 * Return: 0 if successful or 1 for other things
 */
int main(int argc, char *argv[])
{
	int result, nan1, nan2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	nan1 = _atoi(argv[1]);
	nan2 = _atoi(argv[2]);
	result = nan1 * nan2;
	printf("%d\n", result);
	return (0);
}
