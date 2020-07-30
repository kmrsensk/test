#include <stdio.h>
/*
int main() {
    int i = 1, j;
    //while
    while (i <= 9)
    {
        j = 1;
        while (j <= 9)
        {
            printf("%d*%d=%2d, ", i, j, i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    //for
    for(i=1;i<10;i++){
        for(j=1;j<10;j++){
            printf("%d*%d=%2d, ", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}
*/
int main(){
    int i,j,k,l,h;
    while(1){
    printf("Height?");
    scanf("%d",&h);
    printf("\n");
    for(i=1;i<h+1;i++){
        for(j=h;j>i-1;j--){
            printf(" ");
        }
        for(k=1;k<i+1;k++){
            printf("*");
        }
        for(l=0;l<i-1;l++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    if(h==-1){break;}
    }
    return 0;
}