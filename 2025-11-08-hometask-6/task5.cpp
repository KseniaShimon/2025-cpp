#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int n = 0;
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    int count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int found = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] * arr[i-1] > 0) {
            found = 1;
            break;
        }
    }
    
    if (found) printf("YES\n");
    else printf("NO\n");
    
    free(arr);
    return 0;
}