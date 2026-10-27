#include <stdio.h>
#include <string.h>         // c++: #include <cstring>


int main() {
    char s1[16] = "Hello World";        // int a1[] = {1, 2, 3};
    char s2[16]; //= s1;//= "Hello World"; // int a2[] = a1;
    char s3[8];

    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("s3: %s\n", s3);

    strcpy(s2, s1);   // strcpy(target, source);
    //strcpy(s3, s1);
    strncpy(s3, s1, 8-1);
    s3[7] = '\0';
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("s3: %s\n", s3);


    //char *sx = s1;
    //s2 = "Hello World";

    /*for (int i = 0; s1[i] != '\0'; i++)
        s2[i] = s1[i];*/

    /*if (s1 == s2)
        printf("Same strings\n");
    else
        printf("Different strings\n");*/
    return 0;
}