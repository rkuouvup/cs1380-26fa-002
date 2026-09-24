#include <stdio.h>

int main() {
    int a = 5;
    //int i, j;
    //int* x, y;
    int *x, *y;
    // integer pointer
    int* p = &a;    // declare a pointer variable

    printf("a = %d\n", a);
    printf("The address of a is %p\n", &a); // referencen operator
    printf("The value of p is %p\n", p);
    printf("The addres of p is %p\n", &p);
    printf("The value of a is %d\n", *p);   // dereference operator
    printf("size of x: %zu, size of y: %zu\n", sizeof(x), sizeof(y));

    return 0;
}