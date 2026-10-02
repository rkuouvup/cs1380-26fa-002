#include <stdio.h>

int main() {
    /***************
     * wild pointer example
     * ************ */
    //int *p; // wild pointer
    //printf("%p\n", p);
    //printf("%d\n", *p);

    /***************
     * Null pointer example
     * ************* */
    int *p = NULL;  // Null pointer
    if (p == NULL) {
        printf("p is a null pointer\n");
    } else {
        printf("%d\n", *p);
    }
    return 0;
}