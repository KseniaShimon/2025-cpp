#include <stdio.h>

int main() {
    FILE *input = fopen("INPUT.TXT", "r");
    FILE *output = fopen("OUTPUT.TXT", "w");
    
    int a, b;
    fscanf(input, "%d %d", &a, &b);
    
    int x = a;
    int y = b;
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int nod = a;
    
    // НОК = (a * b) / НОД
    int nok = (x * y) / nod;
    
    fprintf(output, "%d", nok);
    
    fclose(input);
    fclose(output);
    return 0;
}