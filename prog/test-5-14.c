#include <stdio.h>
int main()
{
    /*
    課題1
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
    printf("誕生日:%d月%d日\n計算結果:%d\n*****\n計算過程\n(1)%d\n(2)%d\n(3)%d\n(4)%d\n(5)%d\n",month,day,e,a,b,c,d,e);
    return 0;
}