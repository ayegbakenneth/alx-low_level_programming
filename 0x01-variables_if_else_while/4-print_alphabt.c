#include <stdio.h>
/**
 * main - program starting point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az != 'q' && az != 'e')
			putchar(az);
	}
	putchar('\n');

	return (0);
}
