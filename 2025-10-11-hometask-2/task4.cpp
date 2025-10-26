#include <cstdio>

int main() {
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    int a2 = 0;
    int b2 = 0;
    int c2 = 0;
    scanf("%d", &a1);
    scanf("%d", &b1);
    scanf("%d", &c1);
    scanf("%d", &a2);
    scanf("%d", &b2);
    scanf("%d", &c2);
    
    if (a1 > b1) { int temp = a1; a1 = b1; b1 = temp; }
    if (b1 > c1) { int temp = b1; b1 = c1; c1 = temp; }
    if (a1 > b1) { int temp = a1; a1 = b1; b1 = temp; }
    
    if (a2 > b2) { int temp = a2; a2 = b2; b2 = temp; }
    if (b2 > c2) { int temp = b2; b2 = c2; c2 = temp; }
    if (a2 > b2) { int temp = a2; a2 = b2; b2 = temp; }
    
    if (a1 == a2 && b1 == b2 && c1 == c2) {
        printf("Boxes are equal");
    } else if (a1 <= a2 && b1 <= b2 && c1 <= c2) {
        printf("The first box is smaller than the second one");
    } else if (a2 <= a1 && b2 <= b1 && c2 <= c1) {
        printf("The first box is larger than the second one");
    } else {
        printf("Boxes are incomparable");
    }
    
    return 0;
}