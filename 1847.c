#include<stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a>=-100 && a<=100 && b>=-100 && b<=100 && c>=-100 && c<=100)
    {
        if(a>b)
        {
            if(b<=c)
            {
                printf(":)\n");
            }
            else if(b>c && (b-c)<(a-b))
            {
                printf(":)\n");
            }
            else
            {
                 printf(":(\n");
            }
        }

        if(a<b)
        {
            if(b>=c)
            {
                 printf(":(\n");
            }
            else if(b<c && (c-b)<(b-a))
            {
                 printf(":(\n");
            }
            else
            {
                printf(":)\n");
            }
        }

       if(a==b)
       {
           if(b<c)
           {
               printf(":)\n");
           }
           else
           {
               printf(":(\n");
           }
       }
    }

    return 0;
}

