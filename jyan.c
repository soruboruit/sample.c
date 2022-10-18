#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
int judge(char player_te, char cpu_te)
{
    if (player_te == 'g')
    {
        if (cpu_te == 'g')
        {
            puts("引き分け");
            return 0;
        }
        else if (cpu_te == 'c')
        {
            puts("プレイヤーの勝ち!");
            return 1;
        }
        else if (cpu_te == 'p')
        {
            puts("CPUの勝ち!");
            return -1;
        }
    }
    else if (player_te == 'c')
    {
        if (cpu_te == 'g')
        {
            puts("CPUの勝ち!");
            return -1;
        }
        else if (cpu_te == 'c')
        {
            puts("引き分け");
            return 0;
        }
        else if (cpu_te == 'p')
        {
            puts("プレイヤーの勝ち!");
            return 1;
        }
    }
    else if (player_te == 'p')
    {
        if (cpu_te == 'g')
        {
            puts("プレイヤーの勝ち!");
            return 1;
        }
        else if (cpu_te == 'c')
        {
            puts("CPUの勝ち!");
            return -1;
        }
        else if (cpu_te == 'p')
        {
            puts("引き分け");
            return 0;
        }
    }
    return 2;
}

static void test(void)
{
    assert(judge('g', 'g') == 0);
    assert(judge('g', 'c') == 1);
    assert(judge('g', 'p') == -1);
    assert(judge('c', 'g') == -1);
    assert(judge('c', 'c') == 0);
    assert(judge('c', 'p') == 1);
    assert(judge('p', 'g') == 1);
    assert(judge('p', 'c') == -1);
    assert(judge('p', 'p') == 0);
}
int main(void)
{
    // test();
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

        judge(player_te, cpu_te);
    }
}