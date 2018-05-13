#include<stdio.h>

int main()
{
    double arr[12][12], sum=0, count=0;
    int r, c, i=0, j=11;
    char ch;

    scanf("%c", &ch);

    for(r=0; r<12; r++)
    {
        for(c=0; c<12; c++)
        {
            scanf("%lf", &arr[r][c]);
        }
    }

    for(r=0; r<12; r++)
    {
        for(c=i+1; c<j; c++)
        {
            if(r<=(11/2)-1)
            {
                sum += arr[r][c];
                count++;
            }
        }
        j--;
        i++;
    }

    if(ch=='S')
    {
        printf("%.1lf\n", sum);
    }
    else if(ch=='M')
    {
        printf("%.1lf\n", sum/count);
    }

    return 0;
}
