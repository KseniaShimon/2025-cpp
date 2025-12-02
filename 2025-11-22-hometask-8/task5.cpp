#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char line[1000];
    fgets(line, sizeof(line), stdin);

    int word_count = 0;
    int in_word = 0;

    for (int i = 0; line[i] != '\0'; i++) {
        if (line[i] == ' ') {
            in_word = 0;
        }
        else {
            if (!in_word) {
                word_count++;
                in_word = 1;
            }
        }
    }

    printf("%d\n", word_count);

    return 0;
}