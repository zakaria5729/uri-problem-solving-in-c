#include<stdio.h>

int main()
{
    double arr1[12][12], sum=0;
    int n, r, c;
    char ch;

    scanf("%d %c", &n, &ch);

    for(r=0; r<12; r++)
    {
        for(c=0; c<12; c++)
        {
             scanf("%lf", &arr1[r][c]);
        }
    }

    if(n>=0 && n<=11)
    {
        for(r=0; r<12; r++)
        {
            for(c=0; c<12; c++)
            {
                if(c==n)
                {
                    sum += arr1[r][c];
                }
            }
        }

        if(ch=='S')
        {
            printf("%.1lf\n", sum);
        }
        else if(ch=='M')
        {
            printf("%.1lf\n", sum/12.0);
        }
    }


    return 0;
}

