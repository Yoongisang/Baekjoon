#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char A[102] = {};
    char B[102] = {};
    char op[2];
    scanf("%s", A);
    scanf("%s", op);
    scanf("%s", B);
    int aLen = strlen(A);
    int bLen = strlen(B);

    if (op[0] == '*')
    {
        // 곱셈: A 뒤에 B의 자리수 - 1 만큼 '0'을 붙인다.
        for (int i = aLen; i < aLen + (bLen - 1); i++)
        {
            A[i] = '0';
        }
        A[aLen + (bLen - 1)] = '\0';
        printf("%s\n", A);
    }
    else if (op[0] == '+')
    {
        if (aLen == bLen)
        {
            // 두 수의 길이가 같으면: "2" 뒤에 (자릿수 - 1)개의 '0'
            A[0] = '2';
            for (int i = 1; i < aLen; i++)
            {
                A[i] = '0';
            }
            A[aLen] = '\0';
            printf("%s\n", A);
        }
        else
        {
            // 두 수의 길이가 다르면, 큰 수의 자릿수 L, 작은 수의 자릿수 k라 하자.
            // 결과는 "1" + (L - k - 1)개의 '0' + "1" + (k - 1)개의 '0'
            char result[103] = {};
            int L, k;
            if (aLen > bLen) {
                L = aLen;
                k = bLen;
            } else {
                L = bLen;
                k = aLen;
            }
            int idx = 0;
            result[idx++] = '1';
            for (int i = 0; i < L - k - 1; i++)
            {
                result[idx++] = '0';
            }
            result[idx++] = '1';
            for (int i = 0; i < k - 1; i++)
            {
                result[idx++] = '0';
            }
            result[idx] = '\0';
            printf("%s\n", result);
        }
    }
    return 0;
}