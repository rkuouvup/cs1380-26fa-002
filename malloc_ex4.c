#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pm = malloc(5 * sizeof(int));
    if (pm == NULL)
        return 1;
    printf("malloc: \n");
    for (int i = 0; i < 5; i++)
        //printf("%d", *(pm + i));
        printf("%d\t", pm[i]);
    printf("\n");

    int *pc = calloc(5, sizeof(int));
    if (pc == NULL)
        return 1;
    printf("calloc: \n");
    for (int i = 0; i < 5; i++)
        printf("%d\t", pc[i]);
    printf("\n");
    return 0;
}