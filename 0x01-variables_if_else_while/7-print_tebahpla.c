#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	for (char i = 'z'; i >= 'a'; i--)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
