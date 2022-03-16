#include "main.h"
/**
 * times_tabe - print 9 times table
 * Description: print 9 times table
 * Return: void
 */

void times_table(void)
{

	int row, column, product, tens, ones;

	for (row = 0; row <= 9; row++)
	{
		for (coloumn = 0; coloumn <=9; coloumn++)
		{
			product = row * coloumn;
			tens = product / 10;
			ones = product % 10;

			if(coloumn == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
