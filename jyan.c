#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    static const char te[] = {'g', 'c', 'p'};
    char cmd[100];

    srand(time(NULL));

    for (;;)
    {
        printf("じゃんけんの手 > ");
        if (fgets(cmd, sizeof cmd, stdin) == NULL)
        {
            break;
        }

        char player_te = cmd[0];
        char cpu_te = te[rand() % 3];
        printf("CPUの手: %c\n", cpu_te);
        /*\n */

        if (player_te == 'g')
        {
            if (cpu_te == 'g')
            {
                puts("引き分け");
            }
            else if (cpu_te == 'c')
            {
                puts("プレイヤーの勝ち!");
            }
            else if (cpu_te == 'p')
            {
                puts("CPUの勝ち!");
            }
        }
        else if (player_te == 'c')
        {
            if (cpu_te == 'g')
            {
                puts("CPUの勝ち!");
            }
            else if (cpu_te == 'c')
            {
                puts("引き分け");
            }
            else if (cpu_te == 'p')
            {
                puts("プレイヤーの勝ち!");
            }
        }
        else if (player_te == 'p')
        {
            if (cpu_te == 'g')
            {
                puts("プレイヤーの勝ち!");
            }
            else if (cpu_te == 'c')
            {
                puts("CPUの勝ち!");
            }
            else if (cpu_te == 'p')
            {
                puts("引き分け");
            }
        }
    }
}