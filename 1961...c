#include<stdio.h>

int main()
{
    int n, h, h2, dif, i, arr[100], flag1=0, flag2=0;

    scanf("%d %d", &n, &h);

    for(i=0; i<h; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=1; i<h; i++)
    {
        if(arr[i]>arr[i-1])
        {
            dif = arr[i] - arr[i-1];
        }

        else
        {
            dif = arr[i-1] - arr[i];
        }

        if(dif<=n)
        {
            flag1++;
        }
    }

    if(flag1==h-1)
    {
        printf("YOU WIN\n");
    }

    else
    {
        printf("GAME OVER\n");
    }

    return 0;
}
