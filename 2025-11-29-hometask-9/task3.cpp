#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

int main(int argc, char** argv)
{
    int n;
    scanf("%d", &n);

    Point* points = malloc(n * sizeof(Point));

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    double max_dist_sq = 0.0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int dx = points[i].x - points[j].x;
            int dy = points[i].y - points[j].y;
            double dist_sq = dx * dx + dy * dy;
            if (dist_sq > max_dist_sq) {
                max_dist_sq = dist_sq;
            }
        }
    }

    double diameter = sqrt(max_dist_sq);

    printf("%.15g\n", diameter);

    free(points);

    return 0;
}