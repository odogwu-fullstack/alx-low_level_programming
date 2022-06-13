#include <stdio.h>
#include <stdlib.h>
int main() {
int firstHour;
int secondHour;
int firstMinute;
int secondMinute;

for(firstHour = 0; firstHour < 3; firstHour++ ){
for (secondHour = 0; secondHour < 10; secondHour++){
if(firstHour == 2 && secondHour == 4) break;
for (firstMinute = 0; firstMinute < 6; firstMinute++){
for (secondMinute = 0; secondMinute < 10; secondMinute++){
putchar(firstHour + '0');
putchar(secondHour + '0');
putchar(':');
putchar(firstMinute + '0');
putchar(secondMinute + '0');
putchar('\n');
}
}
}
}
}
