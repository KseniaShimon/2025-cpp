#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int n = 0;
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; ++i)
    {
        scanf_s("%d", &arr[i]);
    }
    for (int i = 0; i < n; i += 2) {
         printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}