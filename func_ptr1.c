#include <stdio.h>

int add(int a, int b) {return a + b;}
int sub(int a, int b) {return a - b;}

//int apply(int, int, int (*) (int, int))
typedef long long* llp;       // long long a; ll a
typedef int (*op_fn) (int, int);     // int (*op) (int, int)


//int apply(int a, int b, add) {
//int apply(int a, int b, sub) {
//int apply(int a, int b, op) {
//int apply(int a, int b, int (*op)(int, int)) { 
int apply(int a, int b, op_fn op) {
    //return add(a, b);
    //return sub(a, b);
    return op(a, b);
}

int main() {
    //int *p, *q;
    long long a = 100;
    llp p = &a;// long long *
    printf("3 + 5 is %d\n", apply(3, 5, add));
    printf("3 - 5 is %d\n", apply(3, 5, sub));
    return 0;
}

