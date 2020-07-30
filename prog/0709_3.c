#include<stdio.h>
int main(){
    int year,m[12]={1,2,3,4,5,6,7,8,9,10,11,12},count=0;
    while(1){
        printf("西暦何年？");
        scanf("%d", &year);
        printf("[%d]\n", year);
        if(year==-1){
            break;
        }else if((year%4==0)){
            if (!(year % 400 == 0)&&year%100==0)
            {
                count = 1;
            }else{
            count = 0;
            }
        }
        for (int i = 0; i < 12;i++){
                if(i==1&&count==0){
                    printf("%d 月 29　日\n", m[i]);
                }else if(i==1&&count==1){
                    printf("%d 月 28　日\n", m[i]);
                }else if(i==3||i==5||i==8||i==10){
                    printf("%d 月 30　日\n", m[i]);
                }else{
                    printf("%d 月 31　日\n", m[i]);
                    }
            }
    }
}