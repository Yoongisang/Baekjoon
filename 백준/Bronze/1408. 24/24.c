#include <stdio.h>

int main()
{
    char startT[9] = {};
    int startH;
    int startM;
    int startS;
    int startsum;
    char endT[9] = {};
    int endsum;
    int endH, endM, endS;
    int sum;
    scanf("%s", endT);
    scanf("%s", startT);
    //printf("%s\n", startT);
    startH = (((int)(startT[0] - 48)) * 36000) + (((int)(startT[1] - 48)) * 3600);
    startM = (((int)(startT[3] - 48)) * 600) + (((int)(startT[4] - 48)) * 60);
    startS = (((int)(startT[6] - 48)) * 10) + ((int)(startT[7] - 48));
    startsum = startH + startM + startS;
    endsum = (((int)(endT[0] - 48)) * 36000) + (((int)(endT[1] - 48)) * 3600) + (((int)(endT[3] - 48)) * 600) + (((int)endT[4] - 48) * 60) + (((int)(endT[6] - 48)) * 10) + ((int)endT[7] - 48);
    if (startsum > endsum)
    {
        sum = startsum - endsum;
    }
    else if (startsum < endsum) // 14:00:00 15:00:00
    {
        sum = 86400 + startsum - endsum;
    }
    
 
    endH = sum / 3600;
    endM = (sum % 3600) / 60;
    endS = (sum % 60);

    printf("%02d:%02d:%02d\n", endH, endM, endS);

    return 0;
}