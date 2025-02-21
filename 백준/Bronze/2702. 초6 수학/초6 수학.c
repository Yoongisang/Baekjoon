#include <stdio.h>
#include <string.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int a[1000] = {};
    int b[1000] = {};
    int ao[1000] = {};
    int bo[1000] = {};

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
        ao[i] = a[i];
        bo[i] = b[i];
    }

    for (int i = 0; i < N; i++)
    {
        while (b[i] != 0)
        {
            int temp = a[i] % b[i];
            a[i] = b[i];
            b[i] = temp;
        }

    }
   for (int i = 0; i < N; i++)
   {
       printf("%d ", (ao[i] * bo[i]) / a[i]);
       printf("%d\n", a[i]);
       
   }
 


       
    return 0;
}