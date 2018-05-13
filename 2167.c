#include<stdio.h>

int main()
{
    int n, i, j, arr[101], count1=0, count2=0, max=-10000, pos, inc;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);

        if(inc==i)
        {
            count1=0;
        }

        if(arr[i]>=max)
        {
            if(arr[i]>max)
            {
                max = arr[i];
            }

            else if(arr[i]==max && inc<=i)
            {
                count1++;
            }
            else if(arr[i]<max)
            {
                pos = i;
                break;
            }

            inc = i+1;
        }
        else if(arr[i]==max)
        {
            count2++;
        }
    }

    if(count2<2)
    {
        printf("%d\n", pos);
    }
    else if(count2>1)
    {
        printf("0\n");
    }

    return 0;
}
