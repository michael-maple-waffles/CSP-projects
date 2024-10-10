#include <stdio.h>
int i;
int main(void) {
    //make a loop that counts to 50
    for (i=1; i<=50; i++){
        //replace numbers divisableby 3 and 5 with fizz buzz
        if ( i % 3 == 0 && i % 5 == 0){
            printf("FizzBuzz\n");
            //replace divisable by threes
        }else if (i % 3 == 0){
            printf("Fizz\n");
            //replace divisable by fives
        }else if (i % 5 == 0){
            printf("Buzz\n");
            //replace every other number
        }else{
            printf("%d\n", i);
        }
    }
    return 0;
}