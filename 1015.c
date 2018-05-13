#include<stdio.h>

int main(){

    double x1, x2, y1, y2, res=0;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    res = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    printf("%.4lf\n", res);


    return 0;
}

