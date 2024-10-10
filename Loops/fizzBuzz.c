#include <stdio.h>
#include <string.h>
#include <time.h>
int i, usr;
char word1[50], word2[50], word3[50];

void delay(int sec){
    int milli = 1000 * sec;
    clock_t start = clock();
    while(clock()<start+milli);
}


int main(void) {
    printf("how long do you want this?: \n");
    scanf("%d", &usr);
    printf("give me a word: \n");
    scanf("%s", word1);
    printf("give me another word: \n");
    scanf("%s", word2);
    strcat(word3, word1);
    strcat(word3,word2);
    //make a loop that counts to 50
    for (i=1; i<=usr; i++){
        //replace numbers divisableby 3 and 5 with fizz buzz
        if ( i % 3 == 0 && i % 5 == 0){
            printf("%s\n", word3);
            //replace divisable by threes
        }else if (i % 3 == 0){
            printf("%s\n",word1);
            //replace divisable by fives
        }else if (i % 5 == 0){
            printf("%s\n",word2);
            //replace every other number
        }else{
            printf("%d\n", i);
        }
        delay(10);
    }
    return 0;
}