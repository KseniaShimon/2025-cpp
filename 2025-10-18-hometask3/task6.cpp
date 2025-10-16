#include <stdio.h>

int main() {
    int n;
    FILE *fin = fopen("INPUT.TXT", "r");
    FILE *fout = fopen("OUTPUT.TXT", "w");
    
    fscanf(fin, "%d", &n);
    
    int c = 0;
    int m = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        fscanf(fin, "%d", &x);
        
        if (x < 1) {
            c = 0;
        } else {
            c = c + 1;
        }
        
        if (c > m) {
            m = c;
        }
    }
    
    fprintf(fout, "%d", m);
    
    fclose(fin);
    fclose(fout);
    return 0;
}