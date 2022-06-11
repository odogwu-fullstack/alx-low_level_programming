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
	int tStart;


	for (start = 0; start <= 9; start++)
	{
	for (sStart = start + 1; sStart <= 9; sStart++)
	{
	for (tStart = start + 2; tStart <= 9; tStart++)
	{
	putchar(start + '0');
	putchar(sStart + '0');
	putchar(tStart + '0');
	if (start == 7 && sStart == 8 && tStart == 9)
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
	}
	return (0);
}
