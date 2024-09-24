#include <stdio.h>
//make a asking function.
char name[20];
void nameAsk(char blank[100]){
    printf("\nWhat is your name?: ");
    scanf("%s", name);
    strcat(blank, "Hello ");
    strcat(blank,name);
    printf(blank);
}

int main(void) {
    nameAsk(" ");
    nameAsk(" ");
    nameAsk(" ");
    nameAsk(" ");
    nameAsk(" ");
    return 0;
}