#include "main.h"

/**
* print_most_numbers - print num except 2 and 4
*
* return: void
*/
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
		else
		{
			continue;
		}
	}
}
