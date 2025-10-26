#include <cstdio>
#include <cstdlib>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    int first = 1;
    
    if (a != 0) {
        printf("%d", a);
        first = 0;
    }
    
    if (b != 0) {
        if (!first) {
            if (b > 0) printf("+");
        }
        if (b == -1) printf("-");
        else if (b != 1) printf("%d", b);
        printf("x");
        first = 0;
    }
    
    if (c != 0) {
        if (!first) {
            if (c > 0) printf("+");
        }
        if (c == -1) printf("-");
        else if (c != 1) printf("%d", c);
        printf("y");
        first = 0;
    }
    
    if (first) {
        printf("0");
    }
    
    return 0;
}