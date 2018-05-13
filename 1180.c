#include<stdio.h>

int main()
{
    double arr[3][3], sum=0.0;
    int r, c, n;
    char ch[1];

    printf("Enter a number\n");
    scanf("%d", &n);

    printf("Enter a character\n");
    scanf("%s", &ch);

    /*array input*/
    printf("\nEnter the matrix\n");
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            scanf("%lf", &arr[r][c]);
        }
    }

    for(c=0; c<3; c++)
    {
        sum += arr[n][c];
    }

    if(ch[0]=='S')
    {
        printf("%.1lf\n", sum);
    }
    else if(ch[0]=='M')
    {
        printf("%.1lf\n", sum/3.0);
    }

    return 0;
}
