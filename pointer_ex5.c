#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int *p[] = {a, a+1, a+2, a+3, a+4};
    int **pp = p;

    printf("==== Initial values ====\n");
    printf("a[i]:\t"); for(int i=0; i<5; i++) printf("%d ", a[i]); printf("\n");
    printf("p[i]:\t"); for(int i=0; i<5; i++) printf("%p ", p[i]); printf("\n");
    printf("*p[i]:\t"); for(int i=0; i<5; i++) printf("%d ", *p[i]); printf("\n");
    printf("&p[i]:\t"); for(int i=0; i<5; i++) printf("%p ", &p[i]); printf("\n");
    printf("**pp:\t%d\n", **pp);
    printf("==== Updating ====\n");
    pp++;   // pp = pp + 1   ==>    pp = pp + 1 * sizeof(int*) ==> pp = pp + 1 * 8
    (*pp)++;    // *pp = *pp + 1. ==> *pp = *pp + 1 * sizeof(int)  ==> *pp = *pp + 1 * 4
    printf("==== After updates ====\n");
    printf("**pp:\t%d\n", **pp);
    printf("a[i]:\t"); for(int i=0; i<5; i++) printf("%d ", a[i]); printf("\n");
    printf("p[i]:\t"); for(int i=0; i<5; i++) printf("%p ", p[i]); printf("\n");
    printf("*p[i]:\t"); for(int i=0; i<5; i++) printf("%d ", *p[i]); printf("\n");
    printf("&p[i]:\t"); for(int i=0; i<5; i++) printf("%p ", &p[i]); printf("\n");

    (**pp)++;   // **pp = **pp + 1 ==> **pp = 3 + 1
    
    printf("==== After (**pp)++ ====\n");
    printf("**pp:\t%d\n", **pp);
    printf("a[i]:\t"); for(int i=0; i<5; i++) printf("%d ", a[i]); printf("\n");
    printf("p[i]:\t"); for(int i=0; i<5; i++) printf("%p ", p[i]); printf("\n");
    printf("*p[i]:\t"); for(int i=0; i<5; i++) printf("%d ", *p[i]); printf("\n");
    printf("&p[i]:\t"); for(int i=0; i<5; i++) printf("%p ", &p[i]); printf("\n");


    return 0;
}