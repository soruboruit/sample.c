#include <stdio.h>
#include <unistd.h>

int main(void)
{
    long frame = 0;
    int m = 0;

    for (;;)
    {
        switch (m)
        {
        case 0:
            if (frame % 2 == 0)
            {
                printf("\r( + v + )_____ <ヨイショ      ");
            }
            else
            {
                printf("\r    ( - v - )／|__ < ヨイショ！");
            }
            if ((frame + 1) % 10 == 0)
            {
                m = 10;
            }
            break;
        case 10:
            if (frame % 2 == 0)
            {
                printf("\r    _____( + v + ) <ヨイショ!      ");
            }
            else
            {
                printf("\r __|＼( - v - ) < ヨイショ！");
            }
            if ((frame + 1) % 10 == 0)
            {
                m = 0;
            }

            break;
        }

        fflush(stdout);

        frame += 1;
        sleep(1);
    }
    return 0;
}