#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int ones;
	int tens;
	int thousands;

		for (ones = '0'; ones <= '8'; ones++)
		{
			for (tens = '0'; tens <= '9'; tens++)
			{
				for (thousands = '0'; thousands <= '9'; thousands++)
				{
					putchar(ones);
					putchar(tens);
					putchar(thousands);
					if (ones != 7 || tens != '8' || thousands != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
						putchar('\n');
		}

						return (0);
}

