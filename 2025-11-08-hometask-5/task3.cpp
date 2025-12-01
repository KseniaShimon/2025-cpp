#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int n = 0;
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    int count = 0;
    for(int i = 0; i < n; ++i)
    {
        scanf_s("%d", &arr[i]);
        if (arr[i] > 0) count++;
    }
    printf("%d\n", count);
    free(arr);
    return 0;
}