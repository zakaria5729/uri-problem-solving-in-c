#include <stdio.h>
int main()
{
    double a, n1;
    char ch='%';

    scanf("%lf",&a);

    if(a>=0 && a<=400)
    {
       n1 = a*.15;
       printf("Novo salario: %.2lf\n", (a+n1));
       printf("Reajuste ganho: %.2lf\n", n1);
       printf("Em percentual: 15 %c\n", ch);
    }
    else if(a>=400.01 && a<=800)
    {
       n1 = a*.12;
       printf("Novo salario: %.2lf\n", (a+n1));
       printf("Reajuste ganho: %.2lf\n", n1);
       printf("Em percentual: 12 %c\n", ch);
    }

    else if(a>=800.01 && a<=1200)
    {
       n1 = a*.10;
       printf("Novo salario: %.2lf\n", (a+n1));
       printf("Reajuste ganho: %.2lf\n", n1);
       printf("Em percentual: 10 %c\n", ch);
    }

    else if(a>=1200.01 && a<=2000)
    {
       n1 = a*.07;
       printf("Novo salario: %.2lf\n", (a+n1));
       printf("Reajuste ganho: %.2lf\n", n1);
       printf("Em percentual: 7 %c\n", ch);
    }
    else
    {
       n1 = a*.04;
       printf("Novo salario: %.2lf\n", (a+n1));
       printf("Reajuste ganho: %.2lf\n", n1);
       printf("Em percentual: 4 %c\n", ch);
    }

    return 0;
}

