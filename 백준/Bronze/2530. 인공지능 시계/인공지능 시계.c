#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int A, B, C;
    int D;
    scanf("%d %d %d", &A, &B, &C);
    scanf("%d", &D);
    int totalTime = (A * 3600) + (B * 60) + C + D;

    int hour = totalTime / 3600;
    int min = (totalTime % 3600) / 60;
    int sec = (totalTime % 60);

    if (hour > 23)
    {
        int temp = hour;
        hour = temp % 24;
    }
    printf("%d %d %d", hour, min, sec);
    return 0;
}