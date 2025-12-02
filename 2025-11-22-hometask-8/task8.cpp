#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char s[1000];
    scanf("%s", s);

    int len = strlen(s);
    char found = '\0';

    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (s[i] == s[j]) {
                found = s[i];
                break;
            }
        }
        if (found != '\0') break;
    }

    printf("%c\n", found);

    return 0;
}