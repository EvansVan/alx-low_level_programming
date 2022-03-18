#include "main.h"

/**
 * print_square - draws a square
 * @size: length and width of square
 * Return: void
 */

void print_square(int size)
{
	int row;
	int coloumn;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (coloumn = 0; coloumn < size; coloumn++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
