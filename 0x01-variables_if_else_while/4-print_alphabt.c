#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	if (ch != 'q' && ch != 'e')
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
