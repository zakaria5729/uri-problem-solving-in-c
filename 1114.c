#include<stdio.h>
int main(void)
{
   int i, n;
   for(; ;)
   {
       scanf("%d", &n);
       if(n==2002){
        printf("Acesso Permitido\n");
        break;
       }

       if(n!=2002){
        printf("Senha Invalida\n");
       }
   }

   return 0;
}
