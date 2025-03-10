#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);
    getchar();
    char Rickstr[7][40] = {};
    int count = 0;
    strcpy(Rickstr[0], "Never gonna give you up");
    strcpy(Rickstr[1], "Never gonna let you down");
    strcpy(Rickstr[2], "Never gonna run around and desert you");
    strcpy(Rickstr[3], "Never gonna make you cry");
    strcpy(Rickstr[4], "Never gonna say goodbye");
    strcpy(Rickstr[5], "Never gonna tell a lie and hurt you");
    strcpy(Rickstr[6], "Never gonna stop");
    char str[101][51] = {};
    for (int i = 0; i < N; i++)
    {
        fgets(str[i], 51, stdin);
        size_t len = strlen(str[i]);
        if (len > 0 && str[i][len - 1] == '\n')
        {
            str[i][len - 1] = '\0';
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (strcmp(str[i], Rickstr[j]) == 0)
            {
                count++;
                break;
            }
        }
        
    }
    if (count == N)
    {
        printf("No\n");
    }
    else if (count != N)
    {
        printf("Yes\n");
    }
    return 0;
}