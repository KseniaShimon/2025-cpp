#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n = 0;
    int count = 0;

    scanf("%d", &n);
    int*arr = (int*)malloc(n*sizeof(int));
    
    for(int i = 0; i < n; ++i ){
        scanf_s("%d", &arr[i]);
    }
        
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            count++;
        }
    }
    
    printf("%d\n", count);
    free(arr);
    return 0;
}