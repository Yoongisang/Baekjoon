#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() 
{
    long long int N, M;
    scanf("%lld %lld", &N, &M);

    printf("%lld", llabs(N - M));


    return 0;
}