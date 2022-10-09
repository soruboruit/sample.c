#include <stdio.h>

void kuku_show(int beg, int end)
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            printf("%3d", i * j);
        }
        puts("");
    }
}
int main(void)
{
    kuku_show(1, 9);
    return 0;
}
