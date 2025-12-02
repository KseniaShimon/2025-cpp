#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);

    if (strcmp(s1, s2) == 0) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }

    return 0;
}