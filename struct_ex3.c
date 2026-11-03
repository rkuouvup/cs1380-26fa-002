#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[80];
    int age;
    float percentage;
};

int main() {
    int i;
    int *p = &i;
    struct student *s1 = nullptr;
    s1 = malloc(sizeof(struct student));
    //(*s1).age = 18;
    s1->age = 18;
    printf("s1->age: %d\n", s1->age);

    return 0;
}