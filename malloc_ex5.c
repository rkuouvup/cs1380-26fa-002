#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pm = malloc(4 * sizeof(int));
    if (pm == NULL)
        return 1;

    for (int i = 0; i < 4; i++)
        pm[i] = i+1;

    printf("pm: %p\n", pm);
    printf("pm data: \n");
    for (int i = 0; i < 4; i++)
        printf("%d\t", pm[i]);
    printf("\n"); 

    // solution 1
    /*pm = realloc(pm, 10 * sizeof(int));
    printf("pm data: \n");
    for (int i = 0; i < 10; i++)
        printf("%d\t", pm[i]);
    printf("\n"); */
    // solution 2
    int *pr = realloc(pm, 10 * sizeof(int));
    printf("pm: %p\n", pm);
    printf("pr: %p\n", pr);

    printf("pm data: \n");
    for (int i = 0; i < 10; i++)
        printf("%d\t", pm[i]);
    printf("\n");

    printf("pr data: \n");
    for (int i = 0; i < 10; i++)
        printf("%d\t", pr[i]);
    printf("\n");

    if (pr == NULL)
        printf("unable to extend memory space\n");
    else
        pm = pr;

    return 0;
}