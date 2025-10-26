#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    
    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);
    
    if (abs(x1 - x2) == 2 && abs(y1 - y2) == 1)
    {
        printf("YES");
    } 
    else if (abs(x1 - x2) == 1 && abs(y1 - y2) == 2)
    {
        printf("YES");
    } 
    else 
    {
        printf("NO");
    }
    
    return 0;
}