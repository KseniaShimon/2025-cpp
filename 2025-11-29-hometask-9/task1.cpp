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

    int max_index = 0;
    double max_dist = points[0].x * points[0].x + points[0].y * points[0].y;

    for (int i = 1; i < n; i++) {
        double dist = points[i].x * points[i].x + points[i].y * points[i].y;
        if (dist > max_dist) {
            max_dist = dist;
            max_index = i;
        }
    }

    printf("%d %d\n", points[max_index].x, points[max_index].y);

    free(points);

    return 0;
}