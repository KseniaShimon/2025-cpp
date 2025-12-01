#include <stdio.h>
#include <stdbool.h>

bool Election(bool x, bool y, bool z) {
    int count = (x ? 1 : 0) + (y ? 1 : 0) + (z ? 1 : 0);
    return count >= 2;
}

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    bool result = Election(x, y, z);
    printf("%s\n", result ? "true" : "false");
    return 0;
}