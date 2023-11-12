#include <unistd.h>

int _putchar(char Char)
{
	write(1, &Char, 1);
	return (1);
}
