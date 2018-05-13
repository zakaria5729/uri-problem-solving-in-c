#include<stdio.h>

int main()
{
    int num, n1, i, count1=0, count2=0, rep;

    scanf("%d", &num);

    for(i=0; i<num; i++)
    {
        scanf("%d", &n1);

        if(rep>n1)
        {
            count1++;
        }

        else if(rep<n1)
        {
            count1++;
        }

        else if(rep==n1)
        {
            count2++;
        }

        rep = n1;
    }

    if(count1!=0 && count2==0)
    {
        printf("1\n");
    }
    else if(count1!=0 && count2!=0 || count2!=0)
    {
        printf("0\n");
    }

    return 0;
}

