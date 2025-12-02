#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char** argv)
{
    unsigned char c;
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z') {
        c = c - 'a' + 'A';
    }
    else if (c >= 'A' && c <= 'Z') {
        c = c - 'A' + 'a';
    }

    printf("%c\n", c);

    return 0;
}