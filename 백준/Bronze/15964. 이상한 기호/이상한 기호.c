#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void C(int A, int B)
{
    
    printf("%d", (A + B) * (A - B));

}
int main() 
{
    int A;
    int B;
    scanf("%d %d", &A, &B);
    C(A,B);
    return 0;
}

