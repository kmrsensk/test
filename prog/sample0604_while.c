# include <stdio.h>
/*
int main (void){
    int day=1, yen=1,n=0;
    while (yen < 80508) {
        yen +=n;
        printf("day: %d     %d Yen\n", day, yen);
        n=2*day;
        day++;
    }
    printf("Answer Day: %d      %d Yen", day,yen+2*day);
    return 0;
}
*/

int main(void){
    int n=1;
    while(1){
        printf("Input any number:");
        scanf("%d",&n);
        printf("\n");
        if(n<1){
            printf("Please input positive number\n");
        }else if(n>0){
            for(int i=0;i<n;i++){
                printf("Hello world! %d\n",n-i);
            }
            break;
        }else{
            printf("error!\n");
        }
    }
    printf("See you!\n");
    return 0;
}
