#include <stdio.h>

int main() {
    int num;
    int first_max = 0;
    int second_max = 0;
    
    do {
        scanf("%d", &num);
        
        if (num == 0) {
            break;
        }
        
        if (num > first_max) {
            second_max = first_max;
            first_max = num;
        } else if (num > second_max) {
            second_max = num;
        }
        
    } while (1);
    
    printf("%d", second_max);
    
    return 0;
}