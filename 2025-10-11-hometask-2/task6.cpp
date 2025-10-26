#include <cstdio>
#include <cmath>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (a == 0 && b == 0 && c == 0) {
        printf("-1");
        return 0;
    }
    
    if (a == 0 && b == 0) {
        printf("0");
        return 0;
    }
    
    if (a == 0) {
        double root = -c * 1.0 / b;
        printf("1\n%.5lf", root);
        return 0;
    }
    
    int discriminant = b * b - 4 * a * c;
    
    if (discriminant < 0) {
        printf("0");
    } else if (discriminant == 0) {
        double root = -b * 1.0 / (2 * a);
        printf("1\n%.5lf", root);
    } else {
        double root1 = (-b - sqrt(discriminant)) / (2 * a);
        double root2 = (-b + sqrt(discriminant)) / (2 * a);
        
        if (root1 < root2) {
            printf("2\n%.5lf\n%.5lf", root1, root2);
        } else {
            printf("2\n%.5lf\n%.5lf", root2, root1);
        }
    }
    
    return 0;
}