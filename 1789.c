#include<stdio.h>

int main()
{
    int l, v, i, count1=0, count2=0, count3=0, max=0;

    while(scanf("%d", &l) != EOF)
    {
        if(l>=1 && l<=500)
        {
            for(i=0; i<l; i++)
            {
                scanf("%d", &v);

                if(v>=1 && v<=50)
                {
                    if(v > max)
                    {
                        max = v;
                    }
                }
            }
        }

        if(max < 10)
        {
            printf("1\n");
        }
        else if(max>=10 && max<20)
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }

        max = 0;
    }

    return 0;
}
