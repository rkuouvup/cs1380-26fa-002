#include <stdio.h>

/*void foo(int a[]) {
    printf("===== In foo =====\n");
    printf("sizeof a: %zu\n", sizeof(a));
}*/

int main() {
    int a1[] = {1, 2, 3, 4, 5};
    printf("sizeof a1: %zu\n", sizeof(a1));
    int *p1 = a1;
    printf("a1:\t%p\n", a1);
    printf("p1:\t%p\n", p1);
    printf("*p1:\t%d\n", *p1);
    printf("p1+1:\t%p\n", p1+1);
    printf("*(p1+1):\t%d\n", *(p1+1));
    printf("p1[1]:\t%d\n", p1[1]);
    printf("=======================\n");
    //foo(a1);

    //int a2[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int a2[][3] = {{1, 2, 3}, {4, 5, 6}};    
                                            // int a2[2][]
                                            // int a2[][3]
    printf("sizeof(a): %zu\n", sizeof(a2));
    //printf("a2[0][1]: %d\n", a2[0][1]);
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            printf("&a2[%d][%d]:\t%p\n", i, j, &a2[i][j]);
    printf("=======================\n");
    int (*p2)[3] = a2;
    printf("a2:\t%p\n", a2);
    printf("p2:\t%p\n", p2);
    printf("p2+1:\t%p\n", p2+1);    // p2[1]

    printf("sizeof(p2): %zu\n", sizeof(p2));
    printf("sizeof(*p2): %zu\n", sizeof(*p2));
    return 0;
}