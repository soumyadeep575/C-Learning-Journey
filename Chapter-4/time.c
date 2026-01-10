#include <stdio.h>

int main(void)
{
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    int twelve_hour=hour-12;
    
    if (hour<12 && hour>0)
        printf("Equivalent 12 hour time: %d:%.2d AM\n", hour, minute);
    
    else if (hour==12)
        printf("Equivalent 12 hour time: %d:%.2d PM\n", hour, minute);
    
    else if (hour==0)
        printf("Equivalent 12 hour time: %d:%.2d AM\n", 12, minute);
    
    else
        printf("Equivalent 12 hour time: %d:%.2d PM\n", twelve_hour, minute);
}
    
    