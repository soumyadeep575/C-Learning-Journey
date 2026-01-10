#include <stdio.h>

int main(void)

{
    int month, day, year;
    char *month_name;
    printf("Enter date (mm/dd/yy) ");
    scanf("%d/%d/%d", &month, &day, &year);   
    //printf("%i/%i/%i\n", month, day, year);
    switch (month){
        case 1: month_name="January";
                break;
        case 2: month_name="February";
                break;
        case 3: month_name="March";
                break;
        case 4: month_name="April";
                break;
        case 5: month_name="May";
                break;
        case 6: month_name="June";
                break;
        case 7: month_name="July";
                break;
        case 8: month_name="August";
                break;
        case 9: month_name="September";
                break;
        case 10: month_name="October";
                break;
        case 11: month_name="November";
                break;
        case 12: month_name="December";
                break;
        default: month_name="Unknown";
                break;
    }
    switch (day){
        case 1:case 21:case 31: printf("Dated this %dst day of %s, 20%.2d\n", day, month_name, year);
                                  break;
        case 2:case 22: printf("Dated this %dnd day of %s, 20%.2d\n", day, month_name, year);
                         break;
        case 3:case 23: printf("Dated this %drd day of %s, 20%.2d\n", day, month_name, year);
                         break;
        default: printf("Dated this %dth day of %s, 20%.2d\n", day, month_name, year);
                 break;
    }
}