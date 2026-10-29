#include <stdio.h>
#include "point.h"

int main() {
    struct point_t p1 = {0.0, 0.0};
    struct point_t p2 = {3.0, 4.0};
    double d = distance(p1, p2);
    printf("%lf\n", d);
    struct point_t p3;
    init_point(&p3, 4.0, 6.0);
    printf("p3: (%lf, %lf)\n", p3.x, p3.y);

    struct point_t pts[] = {{3.5, 7.8}, {3.0, 4.0}};
    double dist[2];
    dist_to_org(pts, 2, dist);
    
    return 0;
}