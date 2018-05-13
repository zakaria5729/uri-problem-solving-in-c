#include<stdio.h>

int main()
{
    int arr[15], par[15], impar[15], i, count1=0, count2=0, j=0, k=0, l;

    for(i=0; i<15; i++)
    {
        scanf("%d", &arr[i]);

        if(count1<=5)
        {
            if(arr[i]%2==0)
            {
                par[j] = arr[i];
                count1++;
                j++;
            }

            if(count1==5)
            {
                for(l=0; l<5; l++)
                {
                    printf("par[%d] = %d\n", l, par[l]);
                }
                count1=0, j=0;
            }
        }

        if(count2<=5)
        {
            if(arr[i]%2!=0)
            {
                impar[k] = arr[i];
                count2++;
                k++;
            }

            if(count2==5)
            {
                for(l=0; l<5; l++)
                {
                    printf("impar[%d] = %d\n", l, impar[l]);
                }
                count2=0, k=0;
            }
        }
    }

    for(i=0; i<count2; i++)
    {
         printf("impar[%d] = %d\n", i, impar[i]);
    }

    for(i=0; i<count1; i++)
    {
         printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}


/// -7 3
