#include "main.h"
/**
* print_sign - function for print the sign of a number
*
* @n: charchter to be checked
*Return: 1 and prints + if n is greater than 0
*0 and prints 0 if n is zero
*-1 and print - if n less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
