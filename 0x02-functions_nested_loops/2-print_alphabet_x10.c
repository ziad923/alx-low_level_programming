#include <stdio.h>
/**
*print_alphabet_x10 - print 10 times in lowercase,
*followed by a new line
*/
void print_alphabet_x10(void)
{
	int ch;
	int counter = 0;

	while (counter <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		count++;
		_putchar('\n');
	}
}
