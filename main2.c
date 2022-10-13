#include <stdio.h>

static int strlen(const char *s)
{
    int len = 0;
    for (const char *p = s; *p; p++)
    {
        len++;
    }
    return len;
}
int main(void)
{
    int len = strlen("Hello World");
    printf("len[%d]", len);
    return 0;
}