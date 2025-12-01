#include <stdio.h>

double power(double a, int n) {
    double result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= a;
    }
    return result;
}

int main() {
    double a;
    int n;
    scanf("%lf %d", &a, &n);
    printf("%.15g\n", power(a, n));
    return 0;
}