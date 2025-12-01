#include <stdio.h>

int phi(int n) {
    if (n <= 2) return 1;
    int a = 1, b = 1;
    for (int i = 3; i <= n; i++) {
        int next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", phi(n));
    return 0;
}