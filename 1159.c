#include<stdio.h>

int main()
{
    int x, sum=0, j, counter=1;

    while(1)
    {
        scanf("%d", &x);

        if(x==0)
        {
            break;
        }

        for(j=x; j<=10000000; j++)
        {

            if(counter<=5 && j%2==0)
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
