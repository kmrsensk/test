#include<stdio.h>
#include<math.h>
int main(){
    double r, l1,l2 ,s1,s2, s3, s4,v1,v2 ,pi = M_PI;
    int cont;
    while (1)
    {
        printf("半径 = ");
        scanf("%lf", &r);
        printf("%g\n", r);
        l1 = 2 * r;
        l2 = l1 * pi;
        s1 = pow(r, 2);
        s2 = pi * s1;
        s3 = 4 * s1;
        s4 = s3 * pi;
        v1 = 4 * pow(r, 3);
        v2 = v1 * pi/3;
        printf("円周の長さ:%0.3f(%gπ)\n円面積:%0.3f(%gπ)\n球表面積:%0.3f(%gπ)\n球体積:%0.3f(%gπ/3)\n", l2,l1,s2,s1,s4 ,s3,v2,v1);
        printf("続ける？no:0\n");
        scanf("%d", &cont);
        if(cont==0){
            break;
        }
    }
    return 0;
}