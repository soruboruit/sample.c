#include <stdio.h>

#define ARRAY_NUM(_ARRAY_) (sizeof(_ARRAY_) / sizeof(_ARRAY_[0]))

int main(void)
{
    int a[] = {0, 0, 0, 0, 0, 2, 5, 9, 10, 15, 24, 36, 22, 13, 11, 9, 1, 0, 0, 0, 0, 0, 0, 0};
    int i, j;
    for (i = 0; i < ARRAY_NUM(a); i++)
    {
        if (a[i] > 0)
        {
            for (j = i; j < ARRAY_NUM(a); j++)
            {
                if (a[j] == 0)
                    break;
                printf("a[%d]=%d ", j, a[j]);
            }
            break;
        }
    }

    return 0;
}
