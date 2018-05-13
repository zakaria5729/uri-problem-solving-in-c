#include<stdio.h>
#include<string.h>

int main()
{
    int c, i;
    char str[10000];
    float len;

    scanf("%d", &c);

     for(i=0; i<c; i++)
     {
         scanf("%s", str);

         len = strlen(str);

         printf("%.2lf\n", (len*0.01));
     }

    return 0;
}
