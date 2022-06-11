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
	int start;
	int sStart;


	for (start = 0; start <= 9; start++)
	{
	for (sStart = start + 1; sStart <= 9; sStart++)
	{
	putchar(start + '0');
	putchar(sStart + '0');
	if (start == 8 && sStart == 9)
	{
	putchar('\n');
	break;
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	return (0);
}
