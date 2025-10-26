#include <cstdio>

int main(){
    int n = 0;
    scanf("%d", &n);
    int m[n];

    for(int i = 0; i < n; i++)
        m[i] = 0;

    for (int i = 0; i < n; i++)
        scanf("%d", &m[i]);

    int max = m[0];
    int min = m[0];
    for (int i = 0; i < n; i++){
        if (m[i] > max)
            max = m[i];
        if (m[i] < min)
            min = m[i];
    }

    for (int i = 0; i < n; i++){
        if (m[i] == max)
            m[i] = min;
        printf("%d ", m[i]);
    }
    printf("\n");
    return 0;
}