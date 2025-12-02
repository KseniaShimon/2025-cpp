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

    double max_perimeter = 0.0;

    // Перебираем все тройки точек
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {

                // Стороны треугольника
                double a = sqrt((points[i].x - points[j].x) * (points[i].x - points[j].x) +
                                (points[i].y - points[j].y) * (points[i].y - points[j].y));
                double b = sqrt((points[j].x - points[k].x) * (points[j].x - points[k].x) +
                                (points[j].y - points[k].y) * (points[j].y - points[k].y));
                double c = sqrt((points[k].x - points[i].x) * (points[k].x - points[i].x) +
                                (points[k].y - points[i].y) * (points[k].y - points[i].y));

                double perimeter = a + b + c;

                if (perimeter > max_perimeter) {
                    max_perimeter = perimeter;
                }
            }
        }
    }

    printf("%.15g\n", max_perimeter);

    free(points);

    return 0;
}