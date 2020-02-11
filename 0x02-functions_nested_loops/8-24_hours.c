#include "holberton.h"

/**
 * jack_bauer - detemine the absolute value of a character
 */

void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a <= 99; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			if ((a / 10) >= 3)
			{
				;
			}
			else
			{
				if ((a / 10) == 2 && (a % 10) >= 4)
				{
					;
				}
				else
				{
					if ((b / 10) <= 5 && (b % 10) <= 9)
					{
						_putchar((a / 10) + '0');
						_putchar((a % 10) + '0');
/* ':' is 58 */
						_putchar(58);
						_putchar((b / 10) + '0');
						_putchar((b % 10) + '0');
						_putchar(10);
					}
				}
			}
		}
	}
}
