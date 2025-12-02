#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char** argv)
{
    int n;
    scanf("%d", &n);

    double sum_math = 0.0;
    double sum_physics = 0.0;
    double sum_it = 0.0;

    for (int i = 0; i < n; i++) {
        char surname[50], name[50];
        int math, physics, it;
        scanf("%s %s %d %d %d", surname, name, &math, &physics, &it);
        sum_math += math;
        sum_physics += physics;
        sum_it += it;
    }

    double avg_math = sum_math / n;
    double avg_physics = sum_physics / n;
    double avg_it = sum_it / n;

    printf("%.15g %.15g %.15g\n", avg_math, avg_physics, avg_it);

    return 0;
}