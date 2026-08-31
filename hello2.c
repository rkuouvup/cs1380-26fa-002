/*
    hello2.c
    Example of C program general form
    Author: 
    Date: 
*/

// Directives
#include <stdio.h>

int global = 100;

// return_type func_name(arguments) {}
int main() {
    // static type programming languaged
    // data_typa var_name;
    int ver;
    ver = 23.5; 
    printf("Hello, C%f\n", ver); 
    int height, length, width = 8;
    printf("h: %d, l: %d, w: %d\n", height, length, width);

    {
        int block = 100;
        printf("global: %d, main: %d: block: %d\n", global, ver, block);
    }

    //printf("global: %d, main: %d: block: %d\n", global, ver, block);

    int i_var = 5;
    short s_var = 5;
    long l_var = 5;

    printf("Size of i_var: %zu\n", sizeof(i_var));
    printf("Size of s_var: %zu\n", sizeof(s_var));
    printf("Size of l_var: %zu\n", sizeof(l_var));
    printf("Size of 5: %zu\n", sizeof(5));
    printf("Size of int: %zu\n", sizeof(int));

    unsigned int u_var = 5;
    u_var -= 10;
    printf("u_var: %u\n", u_var);

    int big_num = 1000;
    printf("big_num ^ 1: %d\n", big_num);
    big_num = big_num * 1000;
    printf("big_num ^ 2: %d\n", big_num);
    big_num = big_num * 1000;
    printf("big_num ^ 3: %d\n", big_num);
    big_num = big_num * 1000;
    printf("big_num ^ 4: %d\n", big_num);

    return 0;
}