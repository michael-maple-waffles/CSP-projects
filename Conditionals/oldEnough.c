#include <stdio.h>

int main(void) {
    int age;
    printf("what is your age?:\n");
    scanf("%d",&age);
    if (age >=18){
        printf("you are old enough to vote!");
    }else if (age >= 16){
        printf("you can drive!");
    }else if (age >= 15){
        printf("Go get your learners permit!");
    }else if (age >= 5){
        printf("At least you can go to school!");
    }else{
        printf("Go away child!");
    }

    return 0;
}