#include <cstdio>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    scanf("%1d", &a);
    scanf("%1d", &b);
    scanf("%1d", &c);
    scanf("%1d", &d);
    scanf("%1d", &e);
    scanf("%1d", &f);
    
    if (a + b + c == d + e + f) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}