#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int x;

	for(x = 48; x <= 58; x++)
	{
	if(x == 57 || x == 58)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	}
		putchar('\n');
	return (0);
}

