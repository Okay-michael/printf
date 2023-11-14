#include <unistd.h>
/**
 * _putchar - function that writes an output
 * @Char: input character
 * Return: always 0
 */
int _putchar(char Char)
{
	write(1, &Char, 1);
	return (1);
}
