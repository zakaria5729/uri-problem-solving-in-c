#include<stdio.h>

int main()
{
    int n, x, y, sum=0, i, j, counter=1;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d", &x, &y);

        for(j=x; j<=10000000; j++)
        {

            if(counter<=y && j%2!=0)
            {
                sum = sum + j;
                counter++;
            }
        }
        printf("%d\n", sum);

        /*after the first iteration complete then sum and counter is zero*/
        sum=0;
        counter=1;
    }

    return 0;
}
