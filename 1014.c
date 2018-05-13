#include<stdio.h>

int main(){

    int a;
    double b;
    scanf("%d %lf", &a, &b);

    printf("%.3lf km/l\n", (a/b));

return 0;
}
