#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 2000
int main()
{
    int N;
    int result[MAX] = { 0 };
    result[0] = 1;
    int size = 1;
    scanf("%d", &N);
    for (int x = 1; x <= N; x++)
    {
        int carry = 0;
        for (int i = 0; i < size; i++)
        {
            int prod = result[i] * x + carry;
            result[i] = prod % 10;
            carry = prod / 10;
        }

        while (carry)
        {
            result[size] = carry % 10;
            carry /= 10;
            size++;
        }
    }
    int z = 0;
    int sum = 0;
    while (result[z] == 0)
    {
        sum++;
        z++;
    }
    printf("%d\n", sum);
    return 0;
}