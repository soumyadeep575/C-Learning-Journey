#include <stdio.h>

int main(void){
    
    int day_1, month_1, year_1;
    int day_2, month_2, year_2;

    printf("Enter first date (dd/mm/yy): ");
    scanf("%d/%d/%d", &day_1, &month_1, &year_1);
    printf("Enter second date (dd/mm/yy): ");
    scanf("%d/%d/%d", &day_2, &month_2, &year_2);

    if (year_1<year_2)
        printf("%.2d/%.2d/%.2d is earlier date than %.2d/%.2d/%.2d\n", day_1, month_1, year_1, day_2, month_2, year_2);
    else if (year_2<year_1)
        printf("%.2d/%.2d/%.2d is earlier date than %.2d/%.2d/%.2d\n", day_2, month_2, year_2, day_1, month_1, year_1);
    
    else if (month_1<month_2)
        printf("%.2d/%.2d/%.2d is earlier date than %.2d/%.2d/%.2d\n", day_1, month_1, year_1, day_2, month_2, year_2);
    else if (month_2<month_1)
        printf("%.2d/%.2d/%.2d is earlier date than %.2d/%.2d/%.2d\n", day_2, month_2, year_2, day_1, month_1, year_1);
    
    else if (day_1<day_2)
        printf("%.2d/%.2d/%.2d is earlier date than %.2d/%.2d/%.2d\n", day_1, month_1, year_1, day_2, month_2, year_2);
    else if (day_2<day_1)
        printf("%.2d/%.2d/%.2d is earlier date than %.2d/%.2d/%.2d\n", day_2, month_2, year_2, day_1, month_1, year_1);

    else 
        printf("Both the dates are same :)\n");

    return 0;
}