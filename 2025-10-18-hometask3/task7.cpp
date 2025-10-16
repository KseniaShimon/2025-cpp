#include <stdio.h>
 
int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    FILE *fin = fopen("INPUT.TXT", "r");
    FILE *fout = fopen("OUTPUT.TXT", "w");
     
    fscanf(fin, "%d %d %d %d", &a, &b, &c, &d);
     
    int first = 1;
     
    for (int x = -100; x <= 100; x++) {
        long long value = ((long long)a * x + b) * x + c;
        value = value * x + d;
         
        if (value == 0) {
            if (!first) {
                fprintf(fout, " ");
            }
            fprintf(fout, "%d", x);
            first = 0;
        }
    }
     
    fclose(fin);
    fclose(fout);
    return 0;
}