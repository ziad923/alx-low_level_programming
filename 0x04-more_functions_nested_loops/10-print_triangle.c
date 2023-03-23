#include "main.h"
/**
* print_triangle - prints a triangle, followed by a new line
* @size: size of the triangle
*/
void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (int i = 1; i <= size; i++)
		{
			for (int j = i; j < size ; j++)
			{
				putchar(' ');
			}
			for (int k = 1; k <= i ; k++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
