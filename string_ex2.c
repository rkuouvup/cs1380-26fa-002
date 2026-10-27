#include <stdio.h>
#include <string.h>
#define DEST_SIZE 16

/*void foo(char x[]) {
    printf("sizeof(x)/sizeof(char): %zu\n", sizeof(x)/sizeof(char));
}*/

int main() {
    char x[DEST_SIZE] = "Hello ";
    printf("sizeof(x)/sizeof(char): %zu\n", sizeof(x)/sizeof(char));
    printf("strlen(x): %zu\n", strlen(x));
    //foo(x);
    char y[] = "World!";

    printf("x: %s\n", x);
    printf("y: %s\n", y);

    strcat(x, y);   // strcat(destination, source)
    printf("x: %s\n", x);
    printf("y: %s\n", y);

    strncat(x, y, 3); 
    x[DEST_SIZE-1] = '\0';
    printf("x: %s\n", x);
    printf("y: %s\n", y);


    return 0;
}