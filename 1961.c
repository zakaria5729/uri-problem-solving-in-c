#include<stdio.h>

int main()
{
    int n, h, h2, m, i, count=0, flag1=0, flag2=0;

    scanf("%d %d", &n, &h);

    if(n>=1 && n<=5 && h>=2 && h<=100)
    {
        for(i=1; i<=h; i++)
        {
            scanf("%d", &h2);

            if(h2<=10)
            {
                if(count>=1)
                {
                    m = h2 - m;

                    if(m<=n)
                    {
                        flag1++;
                    }
                    else if(m>n)
                    {
                        flag2++;
                    }
                }
                m = h2;
                count++;
            }

        }
    }


    if(flag1!=0 && flag2==0)
    {
        printf("YOU WIN\n");
    }
    else if(flag1!=0 && flag2!=0 || flag2!=0)
    {
        printf("GAME OVER\n");
    }

    return 0;
}

