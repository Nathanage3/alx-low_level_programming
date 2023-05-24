#include "main.h"
/**
 * times_table - times table
 */
void times_table(void)
{
	int i, j, m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = i * j;
			if (j == 0)
			{
				_putchar('0' + m);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (m <= 9)
					_putchar(' ');
				else
					_putchar('0' + (m / 10));
				_putchar('0' + (m % 10));
			}
		}
		_putchar('\n');
	}
}
