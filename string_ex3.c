#include <stdio.h>
#include <string.h>

/*void foo() {
    char *s2 = "Hello world";
    printf("s2: %p\n", s2);
}*/

int main() {
    char *s1 = "Hello World";
    char *s2 = "Hello World";
    char *s3 = "Hello UVU";

    if (s1 == s2)
        printf("s1 == s2\n");
    else
        printf("s1 != s2\n");

    if (strcmp(s1, s2))
        printf("s1 and s2 are the same\n");
    else
        printf("s1 and s2 are not the same\n");

    printf("strcmp(s1, s2): %d\n", strcmp(s1, s2));
    printf("strcmp(s1, s3): %d\n", strcmp(s1, s3));
    printf("strcmp(s3, s1): %d\n", strcmp(s3, s1));


    return 0;
}