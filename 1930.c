#include<stdio.h>

int main()
{
    int t1, t2, t3, t4, sum;

    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);

    if(t1>=2 && t1<=6 && t2>=2 && t2<=6 && t3>=2 && t3<=6 && t4>=2 && t4<=6)
    {
        sum = (t1+t2+t3+t4)-3;
    }

    printf("%d\n", sum);

    return 0;
}
