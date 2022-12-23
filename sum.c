#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    float avg,sum;
    printf("enter 5 numbers:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    avg=sum/5;
    printf("sum=%g\n",sum);
    printf("avg=%g\n",avg);
}