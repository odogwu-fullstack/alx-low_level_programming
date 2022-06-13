#include <stdio.h>
/**
 * main - checks if a character is upper or lower case
 *
 * Return: Doesnt return shit
 */
int main(void)
{
int counter = 0;
unsigned long int firstDigit = 1;
unsigned long int lastDigit = 2;
unsigned long int currentDigit;

printf("%lu, ", firstDigit);
printf("%lu, ", lastDigit);
while (counter < 48)
{
currentDigit = lastDigit + firstDigit;
if (counter == 47)
{
printf("%lu\n", currentDigit);
}
else
{
printf("%lu, ", currentDigit);

}
firstDigit = lastDigit;
lastDigit = currentDigit;
counter++;
}
return (0);
}
