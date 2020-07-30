#include <stdio.h>
int main()
{
    /*
    kadai1
    int  x=8,y=2,wa,sa,seki,syou,amari;
    printf(" x=%d\n wa=%d\n sa=%d\n seki=%d\n syou=%d\n amari=%d\n",x,x+y,x-y,x*y,x/y,x%y);
    return 0;
    */
int month=1,day=16,a,b,c,d,e;
    a=month*2;
    b=a+5;
    c=b*50;
    d=c+day;
    e=d-250;
    printf("birthday:%d /%d \anser:%d\n*****\n \n(1)%d\n(2)%d\n(3)%d\n(4)%d\n(5)%d\n",month,day,e,a,b,c,d,e);
    return 0;
}
