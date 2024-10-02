#include <stdio.h>

int grade;

int main(void) {
    printf("\nWhat is you grade percent?\n");
    scanf("%d", &grade);

    if (grade >= 90){
        printf("You have an A :D\n");
    }else if (grade >= 80){
        printf("You have a B!\n");
    }else if ( grade >= 70){
        printf("you have a C.\n");
    }else if ( grade >= 60){
        printf("you have a D :(\n");
    }else {
        printf("you have a F D.:\n");
    }
    return 0;
}