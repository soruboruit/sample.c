#include <stdio.h>
#include <string.h>
int main()
{
    // \n
    char name[25];
    int age;
    printf("What's your name?\n");
    // scanf("%s", name);
    fgets(name, 25, stdin);

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("Hello %show are you?\n", name);
    printf("You are  %d years old.\n", age);

    return 0;
}