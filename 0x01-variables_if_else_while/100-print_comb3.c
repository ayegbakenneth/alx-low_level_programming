#include <stdio.h>
/**
 * main - the program entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int firstNumber;
	int secondNumber;

	for (firstNumber = 0; firstNumber < 10; firstNumber++)
	{
		for (secondNumber = firstNumber + 1; secondNumber < 10; secondNumber++)
		{
			putchar('0' + firstNumber);
			putchar('0' + secondNumber);
			if (firstNumber != 8 || secondNumber != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
