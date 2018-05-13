#include<stdio.h>

int main()
{
    float n, i, count=0, sum=0;


    for(i=1; i<=6; i++)
    {
        scanf("%f", &n);
        if(n>0)
        {
            count++;
            sum = sum+n;
        }
    }
    printf("%.0f valores positivos\n%.1f\n", count, sum/count);

    return 0;
}

