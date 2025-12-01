#include <stdio.h>

double power(double a, int n) {
    double result = 1.0;
    while (n > 0) {
        if (n % 2 == 1) {
            result *= a;
        }
        a *= a;
        n /= 2;
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