#include <stdio.h>

int main(void) {
    char family[6][30] = {"Michael","Colin","Ashlyn","Shaggy","Luna","Karla"};
    int i;
    for (i=0; i<6; i++){
        printf("%s Willes\n", family[i]);
    }
    return 0;
}