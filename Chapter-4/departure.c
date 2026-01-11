#include <stdio.h>

int main(void)
{
    int hour_24,minute,hour_passed;

    printf("Enter a 24 hour time: ");
    scanf("%d:%d", &hour_24,&minute);

    hour_passed=60*hour_24+minute;

    if (hour_passed<=172)
        printf("Closest departure time is 9:45 p.m, arriving at 11:58 p.m\n");
    else if (hour_passed>=173 && hour_passed<=531)
        printf("Closest departure time is 8:00 a.m, arriving at 10:16 a.m\n");
    else if (hour_passed>=532 && hour_passed<=631)
        printf("Closest departure time is 9:43 a.m, arriving at 11:52 a.m\n");
    else if (hour_passed>=632 && hour_passed<=723)
        printf("Closest departure time is 11:19 a.m, arriving at 1:31 p.m\n");
    else if (hour_passed>=724 && hour_passed<=803)
        printf("Closest departure time is 12:47 p.m, arriving at 3:00 p.m\n");
    else if (hour_passed>=804 && hour_passed<=892)
        printf("Closest departure time is 2:00 p.m, arriving at 4:08 p.m\n");
    else if (hour_passed>=893 && hour_passed<=1042)
        printf("Closest departure time is 3:45 p.m, arriving at 5:55 p.m\n");
    else if (hour_passed>=1043 && hour_passed<=1222)
        printf("Closest departure time is 7:00 p.m, arriving at 9:20 p.m\n");
    else 
        printf("Closest departure time is 9:45 p.m, arriving at 11:58 p.m\n");

    return 0;



    

    
}