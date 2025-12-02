#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char line[1000];
    fgets(line, sizeof(line), stdin);

    int max_len = 0;
    char longest[1000] = "";
    int current_len = 0;
    char current_word[1000] = "";

    for (int i = 0; line[i] != '\0'; i++) {
        if (line[i] == ' ' || line[i] == '\n') {
            if (current_len > 0) {
                current_word[current_len] = '\0';
                if (current_len > max_len) {
                    max_len = current_len;
                    strcpy(longest, current_word);
                }
                current_len = 0;
            }
        }
        else {
            current_word[current_len++] = line[i];
        }
    }

    if (current_len > 0) {
        current_word[current_len] = '\0';
        if (current_len > max_len) {
            max_len = current_len;
            strcpy(longest, current_word);
        }
    }

    printf("%s %d\n", longest, max_len);

    return 0;
}