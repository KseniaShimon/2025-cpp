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

    int x = 0;
    scanf("%d", &x);

    int closest = m[0];
    int min_diff = abs(m[0] - x);
    for (int i = 0; i < n; i++){
        int diff = abs(m[i] - x);
        if (diff < min_diff){
            min_diff = diff;
            closest = m[i];
        }
        else if (diff == min_diff && m[i] < closest){
            closest = m[i];
        }
    }

    printf("%d\n", closest);
    return 0;
}