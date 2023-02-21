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

	for (c = '0'; c <= '9'; c++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				if (!((c == b) || (b == c) || (b > a) || (c > b)))
				{
					putchar(c);
					putchar(b);
					putchar(a);
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
