#include <stdio.h>
/**
*print_alphabet - Prints the alphabet in lowercase
*Return: always 0 (success)
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
