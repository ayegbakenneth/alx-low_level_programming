#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 when successfull
 */
int main(void)
{
	printf("Size of a char is %lu bytes\n", sizeof(char));
	printf("Size of an int is %lu bytes\n", sizeof(int));
	printf("Size of a long int is %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int is %lu bytes\n", sizeof(long long));
	printf("Size of a float is %lu bytes\n", sizeof(float));
	return (0);
}
