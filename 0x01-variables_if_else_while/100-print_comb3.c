#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '89'; x++)
	{
		for ((x / 10) + '0')
		putchar(x);
	if (x != 89)
	
		putchar(',');
		putchar(' ');
	}
	}
		putchar('\n');
	return (0);
}

