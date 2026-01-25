#include <stdio.h>

int main (void){
    int numerical_grade, number;
    printf("Enter the numerical grade: ");
    scanf("%d", &numerical_grade);
    number=numerical_grade/10;

    if (numerical_grade > 100 || numerical_grade < 0){
        printf("Error, enter a proper grade\n");
    }
    else{
        switch (number){
        case 0: case 1: case 2: case 3: case 4: case 5: printf("Letter grade: F\n");
                    break;
        case 6: printf("Letter grade: D\n");
                    break;
        case 7: printf("Letter grade: C\n");
                    break;
        case 8: printf("Letter grade: B\n");
                    break;
        case 9: case 10: printf("Letter grade: A\n");
                    break;
    }
    }
}