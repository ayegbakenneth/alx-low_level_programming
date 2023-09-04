#include <stdio.h>
/**
 * main - Argument numbers
 * @argc: counts
 * @argv: Storing of arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
