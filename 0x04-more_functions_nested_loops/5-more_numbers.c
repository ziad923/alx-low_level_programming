#include "main.h"

/**
* more_numbers - print more numbers
*/
void more_numbers(void)
{
	int a, b, c;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			c = b;
			if (b > 9)
			{
				_putchar('1');
				c = b % 10;
			}
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
