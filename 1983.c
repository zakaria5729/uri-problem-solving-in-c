#include <stdio.h>

int main()
{
    int s, reg[12], i, pos;
    double n[11], rep=-2, max=-1;

    scanf("%d", &s);

    n[1]=-1;

    if(s>=3 && s<=100)
    {
        for(i=1; i<=s; i++)
        {
            if(rep != n[i])
            {
                scanf("%d %lf", &reg[i], &n[i]);

                if(reg[i]>0 && reg[i]<1000000 && n[i]>=0 && n[i]<=10.0)
                {
                    if(n[i]>max)
                    {
                        max = n[i];
                        pos = i;
                    }
                }
            }
            rep = n[i];
        }

        if(max<8)
        {
            printf("Minimum note not reached\n");
        }
        else
        {
            printf("%d\n", reg[pos]);
        }
    }

    return 0;
}
