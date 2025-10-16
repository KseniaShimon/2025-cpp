#include <stdio.h>

int main() {
    double x, y;
    int day = 1;
    
    FILE *input = fopen("INPUT.TXT", "r");
    FILE *output = fopen("OUTPUT.TXT", "w");
    
    fscanf(input, "%lf %lf", &x, &y);
    
    double current = x;
    
    if (current >= y) {
        fprintf(output, "1");
        fclose(input);
        fclose(output);
        return 0;
    }
    
    while (y - current > 0) {
        current = current + (current * 0.15);
        day++;
    }
    
    fprintf(output, "%d", day);
    
    fclose(input);
    fclose(output);
    
    return 0;
}