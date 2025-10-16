#include <stdio.h>

int main() {
    FILE *input = fopen("INPUT.TXT", "r");
    FILE *output = fopen("OUTPUT.TXT", "w");
    
    int n;
    fscanf(input, "%d", &n);
    
    if (n == 0) {
        fprintf(output, "0");
    } else if (n == 1) {
        fprintf(output, "1");
    } else {
        int a = 0;
        int b = 1;
        int i = 2;
        
        while (i <= n) {
            int c = a + b;
            a = b;
            b = c;
            i++;
        }
        
        fprintf(output, "%d", b);
    }
    
    fclose(input);
    fclose(output);
    return 0;
}