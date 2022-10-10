#include <stdio.h>
#include <unistd.h>

int main(void)
{
    long frame = 0;

    for (;;)
    {
        if (frame % 2 == 0)
        {
            printf("\r( + v + )_____ <ヨイショ      ");
        }
        else
        {
            printf("\r  ( - v - )／|__ < ヨイショ！");
        }
        if (frame % 10 == 0)
        {
            puts("");
        }
        fflush(stdout);

        frame += 1;
        sleep(1);
    }
    return 0;
}