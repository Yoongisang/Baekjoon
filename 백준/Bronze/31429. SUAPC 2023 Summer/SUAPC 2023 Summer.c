#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


int main() 
{
    int N;
    scanf("%d", &N);
    int score[11][2][1] =
    {
        {12, 1600},
        {11, 894},
        {11, 1327},
        {10, 1311},
        {9, 1004},
        {9, 1178},
        {9, 1357},
        {8, 837},
        {7, 1055},
        {6, 556},
        {6, 773}
    };
    
    printf("%d %d", score[N - 1][0][0], score[N - 1][1][0]);


    return 0;
}

