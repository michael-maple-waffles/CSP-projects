#include <stdio.h>

int main(void) {
    char sentence[200],name[20];
    printf("what is your name?: ");
    scanf("%s", name);
    strcat(sentence,"((((");
    strcat(sentence, name);
    strcat(sentence,"))))\n");
    strcat(sentence, "<<<<");
    strcat(sentence, name);
    strcat(sentence,">>>>\n");
    strcat(sentence, "----");
    strcat(sentence, name);
    strcat(sentence, "----\n");
    strcat(sentence, ":):)");
    strcat(sentence, name);
    strcat(sentence, "(:(:\n");
    strcat(sentence, "####");
    strcat(sentence, name);
    strcat(sentence, "####\n");
    strcat(sentence, "++++");
    strcat(sentence, name);
    strcat(sentence, "++++\n");
    strcat(sentence, "====");
    strcat(sentence, name);
    strcat(sentence, "====\n");
    strcat(sentence, "~~~~");
    strcat(sentence, name);
    strcat(sentence, "~~~~");
    printf("%s",sentence);
    return 0;
}