#include <stdio.h>

/*
int main()
{
    double a, b, c, h, g;
    while (1)
    {
        printf("身長[cm]?");
        scanf("%lf", &h);
        if (h == -1)
        {
            break;
        }
        printf("体重[kg]?");
        scanf("%lf", &g);
        a = h * h;
        b = g * 10000 / a;
        printf("BMIは%0.2f,", b);
        if (b < 25)
        {
            printf("肥満ではありません\n");
        }
        else
        {
            printf("肥満です\n");
        }
        c = 22 * a;
        printf("身長%0.1fの標準体重は%0.2fkgです\n", h, c / 10000);
    }
    return 0;
}
*/
int main()
{
    int a, b, c = 0;
    printf("いくつまでの素数を表示する？　");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        b = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                b++;
            }
        }
        if (b == 2)
        {
            printf(" %d", i);
            c++;
        }
    }
    printf("\n %d", c);
    return 0;
}
/*
#include <math.h>
int main()
{
    int a, b;
    while (1)
    {
        printf("いくつまでの素数を表示する？　");
        scanf("%d", &a);
        if (a == 1 || a == 0 || a < -1) //a=1のときなし
        {
            printf("定義できません");
        }
        else if (a == 2) //a=2のとき、２のみ
        {
            printf("2");
        }
        else if (a == -1) //無限ループ脱出キー
        {
            break;
        }
        else //a>2のとき、素数はすべて奇数
        {
            printf("2");
            for (int i = 3; i < a + 1; i += 2) //奇数ずつ上がる(a=81の場合:3,5,7,9,11,...,81まで)
            {
                b = 0; //b(flag)初期化
                for (int j = 3; j <= sqrt(i); j += 2)
                {
                    if (i % j == 0) //割り切れるものを選別
                    {
                        b = 1; //割れたもののflagとして
                        break; //値を保持したまま返す
                    }
                }
                if (b == 0) //一回も割れなかったものを選別
                {
                    printf(" %d ", i); //それを出力
                }
            }
        }
        printf("\n");
    }
    return 0;
}
*/
