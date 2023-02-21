#include <stdio.h>
/**
 * main - Determines if a number
 *
 * Description: to print out if statement
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	int b;

	int c;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = '0'; c < '9'; c++)
			{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');
			putchar((c % 10) + '0');

			if (a == '9' && b == '9' && c == '8')

				continue;

			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
