#include "main.h"

/**
 *print_square - draws a square
 *@size: length and width of square
 *Return: void
 */
void print_square(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
			
		}
	}
	else
	{
		putchar('\n');
	}
}
