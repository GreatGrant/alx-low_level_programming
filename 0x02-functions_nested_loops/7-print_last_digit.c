#include "main.h"
/**
 * print_last_digit - entry point
 * Description: prints the last digit of a number.
 * @n: an integer
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar(last + '0');
	return (last);
}
