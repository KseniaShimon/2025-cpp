#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    int m[n];

    for(int i = 0; i < n; i++)
        m[i] = 0;

    for (int i = 0; i < n; i++)
        scanf("%d", &m[i]);

    for (int i = n - 1; i >= 0; i--)
        printf("%d ", m[i]);
    
    printf("\n");
    return 0;
}