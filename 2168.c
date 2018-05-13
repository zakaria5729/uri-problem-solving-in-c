#include<stdio.h>

int main()
{
    int n, i, j, arr[101][101], count1=1, count2=1, k=0;

    scanf("%d", &n);

    for(i=0; i<n+1; i++)
    {
        for(j=0; j<n+1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<n+1; i++)
    {
        for(j=0; j<n+1; j++)
        {
            if(arr[i][j]==1 && j<=i+1)
            {
                count1++;
            }
            else if(arr[i][j]==1 && j<=i+1 && j>=i+1)
            {
                count2++;
            }
        }
    }


    return 0;
}


