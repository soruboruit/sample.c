#include <stdio.h>

int main(void)
{
    int a;

    for (a = 1; a <= 5; a++)
    {
        printf("分岐条件%d\n", a);

        switch (a)
        {
        case 1:
            printf("%d\n\n", a);
            break;

        case 3:
            printf("%d\n\n", a);
            break;

        default:
            printf("その他\n\n");
        }
    }
    return 0;
}