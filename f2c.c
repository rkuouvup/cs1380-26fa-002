#include <stdio.h>

int main() {
    int f = 100;
    int c = ((float)5 / 9) * (f - 32);
    printf("%d degree f is %d degree c\n", f, c);
    return 0;
}