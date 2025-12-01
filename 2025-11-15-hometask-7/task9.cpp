#include <stdio.h>

void hanoi(int n, int from, int to, int aux) {
    if (n == 1) {
        printf("Disk %d move from %d to %d\n", n, from, to);
        return;
    }
    hanoi(n - 1, from, aux, to);
    printf("Disk %d move from %d to %d\n", n, from, to);
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    scanf("%d", &n);
    hanoi(n, 1, 2, 3);
    return 0;
}