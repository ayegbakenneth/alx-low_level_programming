#include <stdio.h>
#include <stdlib.h>
/**
 * main - the program starting point
 *Description: printing alphabet in lowercase
 *Return: Always 0 when successfull
*/
int main(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	putchar(var);
	putchar("\n");
	return (0);
}
