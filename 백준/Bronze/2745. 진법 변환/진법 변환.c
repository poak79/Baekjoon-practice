#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char N[35];      
    int B;
    scanf("%s %d", N, &B);

    long long result = 0;   
    int len = strlen(N);

    for (int i = 0; i < len; i++) {
        char c = N[i];
        int digit;

        if ('0' <= c && c <= '9')
            digit = c - '0';
        else        
            digit = c - 'A' + 10;

        result = result * B + digit;
    }

    printf("%lld\n", result);
    return 0;
}
