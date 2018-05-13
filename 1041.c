#include<stdio.h>

int main(){

    float n1, n2;
    scanf("%f %f", &n1, &n2);

    if(n1>0 && n2>0)
    {
        printf("Q1\n");
    }

    else if(n1<0 && n2>0)
    {
        printf("Q2\n");
    }

    else if(n1<0 && n2<0)
    {
         printf("Q3\n");
    }

    else if(n1>0 && n2<0)
    {
         printf("Q4\n");
    }

    else if(n1!=0 && n2==0)
    {
         printf("Eixo X\n");
    }

    else if(n1==0 && n2!=0)
    {
         printf("Eixo Y\n");
    }

    else if(n1==0 && n2==0)
    {
         printf("Origem\n");
    }

   return 0;
}

