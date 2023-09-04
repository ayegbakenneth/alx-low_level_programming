#include <stdio.h>
/**
 * main - All argument should be printed
 * @argc:  Counts arguments
 * @argv: Stores the arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
		printf("%s\n", argv[k]);
	return (0);
}
