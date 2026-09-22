#include <stdio.h>

// function prototype/declaration
int square(int);

int main() {
    int result = square(5);

    printf("5 square is %d\n", result);
    return 0;
}

// return_type func_name(parameters)
// function definition
int square(int x) {
    return x * x;
}