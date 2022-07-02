#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
		putchar(',');
		putchar(' ');
	}
		putchar('\n');
	return (0);
}

