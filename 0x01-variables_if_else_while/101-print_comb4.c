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

	for (a = 0; a <= 7; a++)
	{
		for (b = a + 1; b < 9; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				if ((a == 9 && b == 8 && c == 7))
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					putchar(a + '0');
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
