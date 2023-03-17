#include <stdio.h>
/**
*main - entry poit
*Return: always 0 (success)
*/
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch != 8)
		{
		putchar(',');
		putchar(' ');
		}
	}
	return (0);
}
