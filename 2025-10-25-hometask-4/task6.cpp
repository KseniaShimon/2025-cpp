#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    int m[n];

    for(int i = 0; i < n; i++)
        m[i] = i + 1;

    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    for (int i = A-1, j = B-1; i < j; i++, j--){
        int temp = m[i];
        m[i] = m[j];
        m[j] = temp;
    }

    for (int i = C-1, j = D-1; i < j; i++, j--){
        int temp = m[i];
        m[i] = m[j];
        m[j] = temp;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", m[i]);
    
    printf("\n");
    return 0;
}