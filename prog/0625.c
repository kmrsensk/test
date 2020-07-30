#include <stdio.h>
int main()
{
    int a, b, i, j, k, l = 0, m, n;
    while (1)
    {
        printf("please enter the number:");
        scanf("%d", &a);
        if (a == -1)
        {
            break;
        }
        b = a / 2;
        l = a - 2;
        n = a - 2;
        printf("\n");
        for (i = b; i > 0; i--)
        {
            for (j = i; j < b; j++)
            {
                printf(" ");
            }
            printf("x");
            for (m = l; m > 0; m--)
            {
                printf(" ");
            }
            l -= 2;
            printf("x\n");
        }
        if (!(a % 2 == 0))
        {
            for (k = 1; k < b + 1; k++)
            {
                printf(" ");
            }
            printf("x\n");
        }
        for (i = 1; i < b + 1; i++)
        {
            for (j = b; j > i; j--)
            {
                printf(" ");
            }
            printf("x");
            for (m = -1; m < l + 1; m++)
            {
                printf(" ");
            }
            l += 2;
            printf("x\n");
        }
        printf("\n");
    }
    return 0;
}