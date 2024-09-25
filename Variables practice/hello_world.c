#include <stdio.h>
//make a asking function.
char name[20];
void nameAsk(char blank[]){
    printf("\nWhat is your name: ");
    scanf("%s",blank);
    printf("Hello %s\n", blank);
}

int main(void) {
    nameAsk(name);
    nameAsk(name);
    nameAsk(name);
    nameAsk(name);
    nameAsk(name);
    return 0;
}