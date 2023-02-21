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
	char c;

	c = 'a';
	while
		(c <= 'z')
		{
			if (c != 'e' && c != 'q')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
