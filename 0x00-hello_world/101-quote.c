#include <stdio.h>
#include <unistd.h>
/**
 * Main - Entry point programm
 *
 * Descripiton: A c program that prints a line
 *
 * Return: Sometimes 1 (Success)
 */
int main(void)
{
  const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  write(2, message, sizeof(message) - 1);
  return (1);
}
