#include <stdio.h>

void swap(int *a, int *b) {
    // swap
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    printf("in swap function: a = %d\tb = %d\n", *a, *b);
}

int main() {
    int tmp;
    int a = 6;
    int b = 9;

    printf("before swap in main: a = %d\tb = %d\n", a, b);

    // swap
    swap(&a, &b);

    printf("after swap in main: a = %d\tb = %d\n", a, b);
    return 0;
}