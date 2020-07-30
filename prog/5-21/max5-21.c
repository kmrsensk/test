#include<stdio.h>
int main(void)
{
    int r,h=8;
    double pi = 3.14, sr, s1, s2, v;
    printf("radius? → ");
    scanf("%d",&r);
    s1=pi*r*r;
    sr=2*pi*r;
    v=s1*h;
    s2=2*s1+sr*h;
    printf("r = %d\n",r);
    printf("h = %d\n",h);
    printf("s = %4.2lf\n",s2);
    printf("v = %4.2lf\n",v);
    return 0;
}
/*
{
    int a,b=9;
    printf("Push any number → ");
    scanf("%d",&a);

    printf("%d * %d = %d\n",a,b,a*b);

    return 0;
}
*/