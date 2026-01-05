#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int preboji(char* s) {
    int br = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '?' || s[i] == '.' || s[i] == '!')
        {
            br++;
        }
        printf("%c", s[i]);

    }
    return br;
}

int main()
{
    char* string = (char*)calloc(100,sizeof(char));
    scanf("%[^\n]", string);
    int broj = preboji(string);
    printf("%d ", broj);
    return 0;
}
