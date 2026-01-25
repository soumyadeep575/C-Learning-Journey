#include <stdio.h>

int main(void){
    int number,n1,n2;
    char *first=NULL;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    n1=number/10;
    n2=number%10;

    if (number < 10 || number > 99){
        printf("Error, enter a two digit number only\n");
    }

    else if (n2==0){
        switch (n1){
            case 1: printf("You entered the number ten\n");
                        break;
            case 2: printf("You entered the number twenty\n");
                        break;
            case 3: printf("You entered the number thirty\n");
                        break;
            case 4: printf("You entered the number fourty\n");
                        break;
            case 5: printf("You entered the number fifty\n");
                        break;
            case 6: printf("You entered the number sixty\n");
                        break;
            case 7: printf("You entered the number seventy\n");
                        break;
            case 8: printf("You entered the number eighty\n");
                        break;
            case 9: printf("You entered the number ninety\n");
                        break;
        }
    }
    else if (n2 != 0 && number > 10 && number < 20){
        switch (n2){
            case 1: printf("You entered the number eleven\n");
                        break;
            case 2: printf("You entered the number twelve\n");
                        break;
            case 3: printf("You entered the number thirteen\n");
                        break;
            case 4: printf("You entered the number fourteen\n");
                        break;
            case 5: printf("You entered the number fifteen\n");
                        break;
            case 6: printf("You entered the number sixteen\n");
                        break;
            case 7: printf("You entered the number seventeen\n");
                        break;
            case 8: printf("You entered the number eighteen\n");
                        break;
            case 9: printf("You entered the number nineteen\n");
                        break;
        }
    }
    else {
        switch (n1){
            case 2: first="twenty";
                    break;
            case 3: first="thirty";
                    break;
            case 4: first="forty";
                    break;
            case 5: first="fifty";
                    break;
            case 6: first="sixty";
                    break;
            case 7: first="seventy";
                    break;
            case 8: first="eighty";
                    break;
            case 9: first="ninety";
                    break;
        }
        
        switch (n2){
            case 1: printf("You entered the number %s-one\n", first);
                        break;
            case 2: printf("You entered the number %s-two\n", first);
                        break;
            case 3: printf("You entered the number %s-three\n", first);
                        break;
            case 4: printf("You entered the number %s-four\n", first);
                        break;
            case 5: printf("You entered the number %s-five\n", first);
                        break;
            case 6: printf("You entered the number %s-six\n", first);
                        break;
            case 7: printf("You entered the number %s-seven\n", first);
                        break;
            case 8: printf("You entered the number %s-eight\n", first);
                        break;
            case 9: printf("You entered the number %s-nine\n", first);
                        break;
        }
    }
}