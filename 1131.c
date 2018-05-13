#include<stdio.h>

int main()
{
    int in, gr, n, count1=0, count2=0, count3=0, count4=0;

    while(1)
    {
        scanf("%d %d", &in, &gr);
        printf("Novo grenal (1-sim 2-nao)\n");
        count4++;  //grenais

        if(in > gr)
        {
            count1++;  //inter
        }
        else if(in==gr)
        {
            count3++;  //empates
        }
        else
        {
            count2++;  //gremio
        }

        scanf("%d", &n);

        if(n==1)
        {
            continue;
        }
        else if(n==2)
        {
            printf("%d grenais\n", count4);
            printf("Inter:%d\n", count1);
            printf("Gremio:%d\n", count2);
            printf("Empates:%d\n", count3);

            if(count1 > count2)
            {
                printf("Inter venceu mais\n");
            }
            if(count1 < count2)
            {
                printf("Gremio venceu mais\n");
            }
            if(count1==count2)
            {
                printf("Nao houve vencedor\n");
            }

            break;
        }
    }

    return 0;
}
