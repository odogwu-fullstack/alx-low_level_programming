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

	start = 97;
	while (start < 123)
	{
	if(start == 101 || start == 113)
	{
	start++;
	continue;
	}
	putchar(start);
	start++;
	}
	putchar('\n');
	return (0);
}
