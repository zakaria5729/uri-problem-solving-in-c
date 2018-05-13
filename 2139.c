#include<stdio.h>

int main()
{
    int a, b, c;

    while(scanf("%d %d", &a, &b) != EOF)
    {
        if(a==12 && b==24)
        {
            printf("E vespera de natal!\n");
        }
        else if(a==12 && b==25)
        {
            printf("E natal!\n");
        }
        else if(a==12 && b>25)
        {
            printf("Ja passou!\n");
        }
        else
        {
            if(a==1)
            {
                printf("Faltam %d dias para o natal!\n", (359-(b-1)));
            }
            else if(a==2)
            {
                printf("Faltam %d dias para o natal!\n", (359-(b-1)));
            }
            else if(a==2)
            {

            }
        }
    }

    return 0;
}
