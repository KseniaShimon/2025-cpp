#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char s[1000];
    scanf("%s", s);

    int len = strlen(s);
    int is_palindrome = 1;

    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }

    return 0;
}