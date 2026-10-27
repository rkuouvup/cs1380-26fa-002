#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "This is a sentence with 7 tokens";
    printf("s before parsing: %s\n", s);
    printf("location of s: %p\n", s);
    for (int i = 0; i < strlen(s); i++)
        printf("s[%d]:\t%c\t%d\n", i, s[i], s[i]);
    /*char *token_p = strtok(s, " ");
    printf("token_p: %s\n", token_p);
    token_p = strtok(NULL, " ");
    printf("token_p: %s\n", token_p);*/

    char *token_p = strtok(s, " ");
    while(token_p != NULL) {
        printf("%p: %s\n", token_p, token_p);
        token_p = strtok(NULL, " ");
    }

    printf("s after parsing: %s\n", s);
    for (int i = 0; i < sizeof(s)/sizeof(char); i++)
        printf("s[%d]:\t%c\t%d\n", i, s[i], s[i]);

    return 0;
}