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
		if (ch != 8)
		{
		putchar(ch);
		putchar(',');
		putchar(' ');
		}
	}
	return (0);
}
