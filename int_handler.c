#include "main.h"
/**
 * int_handler - function that handles inters
 * @params: va_list parameter passed to int_handler
 * Return: int
 */
int int_handler(va_list params)
{
	int num, param_digits, last_digit, divisor, counter, returned_digits;

	num = va_arg(params, int);
	param_digits = 0;
	counter = 1;
	divisor = 1;
	last_digit = 1;
	if (num == 0) /*when numberis 0*/
	{
		_putchar(0);
		return(0);
	}
	if (num > 0) /*get length of num as param_digits*/
	{
		last_digit /= 10;
		param_digits++;
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	returned_digits = param_digits;
	while (param_digits > 0) /*print each digit*/
	{
		while (counter < param_digits)
		{
			divisor *= 10;
			counter++;
		}
		last_digit = num / divisor;
		_putchar('0' + last_digit);
		num %= divisor;
		param_digits--;
	}
	return (returned_digits);
}
