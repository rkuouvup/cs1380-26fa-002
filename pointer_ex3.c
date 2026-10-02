#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    double d[] = {1.0, 2.0, 3.0};
    int *vptr1 = &a[0];
    double *vptr2 = &d[0];

    printf("&a[0]:\t\t%p\n", &a[0]);
    printf("vptr1:\t\t%p\n", vptr1);
    printf("*vptr1:\t\t%d\n", *vptr1);
    printf("vptr1 + 1:\t%p\n", vptr1 + 1);
    printf("*(vptr1 + 1):\t%d\n", *(vptr1 + 1));
    printf("a[1]:\t\t%d\n", a[1]);
    printf("vptr1[1]:\t%d\n", vptr1[1]);
    printf("vptr2:\t\t%p\n", vptr2);
    printf("vptr2 + 1:\t%p\n", vptr2 + 1);
    return 0;
}