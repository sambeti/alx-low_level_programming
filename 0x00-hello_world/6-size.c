#include<stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the siizing  by using the 'printf' function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of a int: %ld byte(s)\n", sizeof(int));
	printf("Size of a short: %ld byte(s)\n", sizeof(short));
	printf("Size of a long: %ld byte(s)\n", sizeof(long));
	printf("Size of a long long: %ld byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	printf("Size of a double: %d byte(s)\n", sizeof(double));
	printf("Size of a long double: %ld byte(s)\n", sizeof(long double));
	return (0);
}
