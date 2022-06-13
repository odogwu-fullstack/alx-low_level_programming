#include <stdio.h>
/**
 * main - checks if a character is upper or lower case
 *
 * Return: Doesnt return shit
 */
int main(void)
{
int counter = 0;
int firstDigit = 1;
int lastDigit = 2;
int currentDigit;

printf("%d, ", firstDigit);
printf("%d, ", lastDigit);
while (counter < 48)
{
currentDigit = lastDigit + firstDigit;
if (counter == 47)
printf("%d\n", currentDigit);
else
printf("%d, ", currentDigit);
firstDigit = lastDigit;
lastDigit = currentDigit;
counter++;
}
return (0);
}
