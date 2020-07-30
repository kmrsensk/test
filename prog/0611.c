#include<stdio.h>
/*
int main(void){
    int g=0,h=0;
    while(1){
            printf("Please select your gender.(Male:1,Female:2)");
            scanf("%d",&g);
            if(g==1||g==2){
                break;
                }else{
                    printf("miss!\n");
                }
    }
    while(1){
                printf("Which is your dominant hand?(Right:3,Left:4)");
                scanf("%d", &h);
                if (h == 3 || h == 4)
                {
                    break;
                }
                else
                {
                    printf("miss!\n");
                }
    }
        printf("You are ");
        if(h==3){
            printf("Rightly ");
            if(g==1){
                printf("male.\n");
            }else{
                printf("female.\n");
            }
        }else if (h == 4)
        {
            printf("Lefty ");
            if (g == 1)
            {
                printf("male.\n");
            }
            else
            {
                printf("female.\n");
            }
        }
        return 0;
}
*/
int main(void){
    int n,x;
    while(1){
        printf("please enter the number.\n");
        scanf("%d",&n);
        printf("\n");
        if(n>0&&n<10){
            break;
        }else{
            printf("miss number!\n");
        }
    }
    x=n;
    for (int i =1; i < 10-x; i++)
    {
        for(int j=0;j<n+1;j++){
            printf("%d",j);
        }
        printf("\n");
        n++;
    }
    for (int i =10-x; i >0; i--)
    {
        for(int j=0;j<n+1;j++){
            printf("%d",j);
        }
        printf("\n");
        n--;
    }
    return 0;
}