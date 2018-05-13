#include<stdio.h>

int main()
{
    double arr[6][6], sum=0, count=0;
    int r, c, i=0, j=5; //j=11;
    char ch;

    scanf("%c", &c);

    for(r=0; r<6; r++)
    {
        for(c=0; c<6; c++)
        {
            scanf("%lf", &arr[r][c]);
        }
    }


    for(r=0; r<6; r++)
    {
        for(c=i+1; c<j; c++) ///j=11, i=0
        {
            if(r<=(5/2)-1)
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
