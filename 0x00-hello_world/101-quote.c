#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point program
 *
 * Description: Prints a message to the standard error output
 *
 * Return: Always returns 1 to indicate an error occurred
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

