#include <stdio.h>

int main(void) {
    char name[20];
    printf("what is your name?: ");
    fgets(name,sizeof(name),stdin);
    printf("Hello %s",name);
    return 0;
}