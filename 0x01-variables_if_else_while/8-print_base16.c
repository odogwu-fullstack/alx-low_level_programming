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
	char cCounter;

	start = 0;
	while (start < 10)
	{
	putchar(start + '0');
	start++;
	}
	for (cCounter = 'a'; cCounter < 'g'; cCounter++)
	{
	putchar(cCounter);
	}
	putchar('\n');
	return (0);
}
