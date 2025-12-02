#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

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

    double sum_x = 0.0;
    double sum_y = 0.0;

    for (int i = 0; i < n; i++) {
        sum_x += points[i].x;
        sum_y += points[i].y;
    }

    double cx = sum_x / n;
    double cy = sum_y / n;

    printf("%.15g %.15g\n", cx, cy);

    free(points);

    return 0;
}