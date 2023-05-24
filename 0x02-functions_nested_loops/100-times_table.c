#include "main.h"
/**
 * print_times_table - print times table
 * @n: the nth times table
 * Return: always 0 on success and 1 for failure
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 13)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
			product = i + j;
				if (product < 10)
				{
					_putchar(product + 48);
					if (j == n)
						break;
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if ((product > 9) && (product < 100))
				{
					_putchar((product / 10) + 48);
					_putchar((product % 10) + 48);
					if (j == n)
						break;
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if ((product >= 100) && (product <= 144))
				{
					_putchar('0' + (product / 100));
                    			_putchar('0' + ((product / 10) % 10));
                    			_putchar('0' + ((product % 10) % 10));
					if (j == n)
						break;
					_putchar(',');
					_putchar(' ');
			       	}
		       	}
			_putchar('\n');
	       	}
       	}
	_putchar('\n');
}
