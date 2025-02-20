#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void C(double A, double B)
{
    
    printf("%.0f", (A + B) * (A - B));

}
int main() 
{
    double A;
    double B;
    scanf("%lf %lf", &A, &B);
    C(A,B);
    return 0;
}

