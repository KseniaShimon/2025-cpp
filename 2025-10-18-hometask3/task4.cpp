 #include <stdio.h>

int main() {
    FILE *input = fopen("INPUT.TXT", "r");
    FILE *output = fopen("OUTPUT.TXT", "w");
    
    int numbers[100];
    int n = 0;
    int num;
    
    do {
        fscanf(input, "%d", &num);
        numbers[n] = num;
        n++;
    } while (num != 0);
    
    int max_count = 1;
    int current_count = 1;
    int i = 1;
    
    do {
        if (numbers[i] == numbers[i-1]) {
            current_count++;
            if (current_count > max_count) {
                max_count = current_count;
            }
        } else {
            current_count = 1;
        }
        i++;
    } while (numbers[i] != 0);
    
    fprintf(output, "%d", max_count);
    
    fclose(input);
    fclose(output);
    return 0;
}