#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: command-line arguments
 * @argv: containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num;
	int sum;
	int a;
	int b;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}

		 num = atoi(argv[a]);

		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
