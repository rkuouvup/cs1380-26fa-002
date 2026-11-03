#include <stdio.h>

struct student {
    int id1;
    int id2;
    char a;
    char b;
    float percentage;
};

int main() {
    struct student s1 = {1, 2, 'A', 'B', 90.5};
    printf("size of id1:\t%zu\n", sizeof(s1.id1));
    printf("size of id2:\t%zu\n", sizeof(s1.id2));
    printf("size of a:\t%zu\n", sizeof(s1.a));
    printf("size of b:\t%zu\n", sizeof(s1.b));
    printf("size of perc:\t%zu\n", sizeof(s1.percentage));
    printf("size of s1:\t%zu\n", sizeof(s1));

    printf("address of id1:\t\t%p\n", &s1.id1);
    printf("address of id2:\t\t%p\n", &s1.id2);
    printf("address of a:\t\t%p\n", &s1.a);
    printf("address of b:\t\t%p\n", &s1.b);
    printf("address of perc:\t%p\n", &s1.percentage);

    return 0;
}