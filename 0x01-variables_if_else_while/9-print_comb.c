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
		if (ch != 9)
		{
		putchar(',');
		putchar(' ');
		}
		else
			continue;
	}
	return (0);
}
