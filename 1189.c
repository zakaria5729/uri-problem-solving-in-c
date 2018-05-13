#include<stdio.h>

int main()
{
    double arr[12][12], sum=0, count=0;
    int r, c, j=4, k=1;
    char ch;

    scanf("%c", &ch);

    for(r=0; r<12; r++)
    {
        for(c=0; c<12; c++)
        {
            scanf("%lf", &arr[r][c]);
        }
    }

    for(r=1; r<=10; r++)
    {
        for(c=0; c<=j; c++)
        {
            if(c<k)
            {
                sum += arr[r][c];
                count++;
            }
        }

        if(r<=5)
        {
            k++;
        }

        if(r>=6)
        {
            j--;
            k--;
        }
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
