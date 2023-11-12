#include "main.h"
/**
 * int_handler - function that handles inters
 * @params: va_list parameter passed to int_handler
 * Return: int
 */
int int_handler(va_list params)
{
	int num, param_digits, last_digit, divisor, counter, d_digits;

	num = va_arg(params, int);
	param_digits = 0;
	counter = 1;
	divisor = 1;
	last_digit = num;
	if (num == 0) /*when number is 0*/
	{
		_putchar(0);
		return (0);
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	while (last_digit > 0) /*get length of num as param_digits*/
	{
		last_digit /= 10;
		param_digits++;
	}
	/*d_digits = param_digits*/
	while (param_digits > 0) /*print each digit*/
	{
		while (counter < param_digits)
		{
			divisor *= 10;
			counter++;
		}
		last_digit = num / divisor;
		d_digits = _putchar(last_digit + '0');
		num %= divisor;
		param_digits--;
	}
	return (d_digits);
}
