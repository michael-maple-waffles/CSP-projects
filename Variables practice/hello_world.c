#include <stdio.h>
//make a asking function.
char name[20];
void nameAsk(char blank[]){
    printf("\nHello %s", blank);
}

int main(void) {
    nameAsk("Bob?");
    nameAsk("Sheniqua");
    nameAsk("Bonquiqua");
    nameAsk("Lequiqua");
    nameAsk("Daquiqua\n");
    return 0;
}