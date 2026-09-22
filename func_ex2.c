#include <stdio.h>

void f1() {
    int count1 = 0;
    count1++;
    printf("count in function1 is %d\n", count1);
}

int main(){
    f1();
    f1();
    f1();
    return 0;
}