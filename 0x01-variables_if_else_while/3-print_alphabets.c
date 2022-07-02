#include <stdio.h>
/**
*main- entry point
*return: always 0
*/
int main(void)
{
int ch;
for (ch = 97; ch >= 122; ch++)
{
	putchar(ch);
}
for (ch = 65; ch >= 90; ch++)
{
	putchar(ch);
}
return (0);
}
