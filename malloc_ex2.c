#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int* create_int_array(int size) {
    int *p = malloc(size * sizeof(int));
    if (p == NULL) {
        fprintf(stderr, "Error #%d: %s\n", errno, strerror(errno));
        return NULL;
    }
    return p;
}

int main() {
    int n;

    printf("Enter the number of elems: ");
    scanf("%d", &n);
    int *p = create_int_array(n);

    for (int i = 0; i < n; i++)
        //*(p + i) = i + 1;
        p[i] = i + 1;

    for (int i = 0; i < n; i++)
        printf("%d\t", *(p + i));
    printf("\n");
    return 0;
}