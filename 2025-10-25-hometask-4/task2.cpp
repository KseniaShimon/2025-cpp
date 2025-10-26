#include <cstdio>

int main(){
    int n = 0;
    scanf("%d", &n);
    int m[n];

    for(int i = 0; i < n; i++)
        m[i] = 0;

    for (int i = 0; i < n; i++)
        scanf("%d", &m[i]);
    
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    a -= 1;
    int id = a;
    int max = m[a];
    for (int i = a; i < b; i++){
        if (m[i] > max){
            max = m[i];
            id = i;
        }
    }

    printf("%d %d\n", max, id + 1);

    return 0;
}