#include "main.h"
/**
 * print_int - This function prints int and the standered output
 * @number: This is the num to be printed
 * @counter: this is the counter variable
 *
 * Return: this returns an int value
 */
int print_int(long number, int counter)
{
	if (number < 0)
	{
		_putchar('-');
		counter = counter + 1;
		number *= (-1);
	}
	if (number / 10)
	{
		counter = print_int(number / 10, counter);
	}
	_putchar(number % 10 + '0');
	return (counter + 1);
}
