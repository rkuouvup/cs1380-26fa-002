#include <stdio.h>

struct point_t {
    double x;
    double y;
};

typedef struct point_tt {
    double x;
    double y;
} Point;

typedef long long ll;

int main() {
    int i;
    long long l1;
    ll l2;
    int a[3] = {1, 2, 3};
    struct point_t p1 = {3.0, 4.0};
    p1.x = 0.0; p1.y = 0.0;
    printf("p1: (%lf, %lf)\n", p1.x, p1.y);

    struct point_tt p2 = {.y = 3.0, .x = 4.0};
    printf("p2: (%lf, %lf)\n", p2.x, p2.y);
    Point p3;


    return 0;
}