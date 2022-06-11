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
	int startU;

	start = 97;
	startU = 65;
	while (start < 123)
	{
	putchar(start);
	start++;
	}
	while (startU < 91)
	{
	putchar(startU);
	startU++;
	}
	putchar('\n');
	return (0);
}
