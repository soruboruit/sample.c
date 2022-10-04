#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20];
    char str1[] = "soru";
    char str2[] = "boru";
    int i = 3;
    sprintf(str, "%s%s%d", str1, str2, i);
    printf("%s", str);

    return 0;
}