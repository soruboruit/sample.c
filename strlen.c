#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[256];
    scanf("%s", str);
    int i;
    i = strlen(str);
    printf("%d", i);
    return 0;
}