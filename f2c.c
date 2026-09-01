#include <stdio.h>

int main() {
    //int f = 100;
    //int c = ((float)5 / 9) * (f - 32);
    //printf("%d degree f is %d degree c\n", f, c);

    float f = 100;
    float c;

    printf("f degree wad %f\n", f);
    printf("Please enter f degree of current temperatur: ");
    scanf("%f", &f);    // reference operator

    c = ((float)5 / 9) * (f - 32);
    printf("%f f degree is %f c degree\n", f, c);

    int num, denom;
    printf("Enter a fraction: ");
    int error_check = scanf("%d/%d", &num, &denom);
    printf("Your input is %d/%d\n", num, denom);
    printf("error_check: %d\n", error_check);


    return 0;
}