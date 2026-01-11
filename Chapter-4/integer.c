#include <stdio.h>

int main(void)
{
    int integer_1, integer_2, integer_3, integer_4;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &integer_1, &integer_2, &integer_3, &integer_4);

    if (integer_1==integer_2 && integer_2==integer_3 && integer_3==integer_4){
        printf("All numbers are equal\n");
    }
    else{
    if (integer_1<=integer_2 && integer_1<=integer_3 && integer_1<=integer_4){
        printf("Smallest integer: %d\n", integer_1);
    }
    else if (integer_2<=integer_1 && integer_2<=integer_3 && integer_2<=integer_4){
        printf("Smallest integer: %d\n", integer_2);
    }
    else if (integer_3<=integer_1 && integer_3<=integer_2 && integer_3<=integer_4){
        printf("Smallest integer: %d\n", integer_3);
    }
    else{
        printf("Smallest integer: %d\n", integer_4);
    }

     if (integer_1>=integer_2 && integer_1>=integer_3 && integer_1>=integer_4){
        printf("Greatest integer: %d\n", integer_1);
    }
    else if (integer_2>=integer_1 && integer_2>=integer_3 && integer_2>=integer_4){
        printf("Greatest integer: %d\n", integer_2);
    }
    else if (integer_3>=integer_1 && integer_3>=integer_2 && integer_3>=integer_4){
        printf("Greatest integer: %d\n", integer_3);
    }
    else{
        printf("Greatest integer: %d\n", integer_4);
    }
    }
}