#include <stdio.h>
int main()
{
    double a;
    int n;

    scanf("%lf",&a);  //576.73
    n = a*100;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", (n/10000));  //5
    n = n%10000;   //7673

    printf("%d nota(s) de R$ 50.00\n", (n/5000));   //1
    n = n%5000;   //2673

    printf("%d nota(s) de R$ 20.00\n", (n/2000));   //1
    n = n%2000;    //673

    printf("%d nota(s) de R$ 10.00\n", (n/1000));   //0
    n = n%1000;    //673

    printf("%d nota(s) de R$ 5.00\n", (n/500));    //1
    n = n%500;    //173

    printf("%d nota(s) de R$ 2.00\n", (n/200));   //0
    n = n%200;


    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", (n/100));   //1
    n = n%100;    //73

    printf("%d moeda(s) de R$ 0.50\n", (n/50));   //1
    n = n%50;    //23

    printf("%d moeda(s) de R$ 0.25\n", (n/25));   //0
    n = n%25;   //23

    printf("%d moeda(s) de R$ 0.10\n", (n/10));   //2
    n = n%10;   //3

    printf("%d moeda(s) de R$ 0.05\n", (n/5));     //0
    n = n%5;    //3

    printf("%d moeda(s) de R$ 0.01\n", (n/1));  //3

 return 0;
}
