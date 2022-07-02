#include <stdio.h>
/**
*main- entry point, prints lowercase followed by uppercase
*Return: Always 0 (Success)
*/
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
