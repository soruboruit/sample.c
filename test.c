#include <stdio.h>
#define number 5

int main(void)
{

    int a;
    int student[number];
    int min, min2;
    int min_num, min2_num;

    printf("5人の点数を入力してください。\n");
    for (a = 0; a < number; a++)
    {
        printf("%d番目の点数：", a + 1);
        scanf("%d", &student[a]);
    }

    min = student[0];
    min_num = 0;

    for (a = 1; a < 5; a++)
    {
        if (student[0] > min)
        {
            min2 = min;
            min2_num = min_num;
            min = student[a];
            min_num = a;
        }
        else if (student[0] > min2)
        {
            min2 = student[a];
            min2_num = a;
        }
    }

    printf("最低点は%d点\n", min);
    printf("学生番号は%d番\n", min_num + 1);
    printf("二番目に低い点は%d点\n", min2);
    printf("学生番号は%d番\n", min2_num + 1);

    return 0;
}