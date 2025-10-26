#include <cstdio>
 
int main(){
    int n = 0;
    scanf("%d", &n);
    int m[n];
 
    for(int i = 0; i < n; i++)
        m[i] = 0;
 
    for (int i = 0; i < n; i++)
        scanf("%d", &m[i]);
     
    int k = 0;
    scanf("%d", &k);
 
    int count = 0;
    for (int i = 0; i < n; i++){
        if (m[i] == k){
            count++;
        }
    }
 
    printf("%d\n", count);
 
    return 0;
}