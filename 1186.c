#include<stdio.h>

int main()
{
    double arr1[12][12], sum=0;
    int n, r, c, i=1, count=0;
    char ch;

    scanf("%c", &ch);

    for(r=0; r<12; r++)
    {
        for(c=0; c<12; c++)
        {
            scanf("%lf", &arr1[r][c]);
        }
    }

    for(r=0; r<12; r++)
    {
        for(c=0; c<12; c++)
        {
            if(c>12-i)
            {
                sum += arr1[r][c];
                count++;
            }
        }
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
