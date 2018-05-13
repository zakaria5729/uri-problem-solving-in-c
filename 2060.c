#include<stdio.h>

int main()
{
    int n, i, arr[1000], c1=0, c2=0, c3=0, c4=0;

    scanf("%d", &n);

    if(n>=1 && n<=1000)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d", &arr[i]);

            if(arr[i]>=1 && arr[i]<=100)
            {
                if(arr[i]%2==0)
                {
                    c1++;
                }
                if(arr[i]%3==0)
                {
                    c2++;
                }
                if(arr[i]%4==0)
                {
                    c3++;
                }
                if(arr[i]%5==0)
                {
                    c4++;
                }
            }
        }
    }

    printf("%d Multiplo(s) de 2\n", c1);
    printf("%d Multiplo(s) de 3\n", c2);
    printf("%d Multiplo(s) de 4\n", c3);
    printf("%d Multiplo(s) de 5\n", c4);

    return 0;
}

