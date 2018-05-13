#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    if(n>0 && n<=1000000)
    {
         for(i=1; i<=n-1; i++)
         {
             printf("Ho ");
         }
         printf("Ho!\n");
    }

    return 0;
}

